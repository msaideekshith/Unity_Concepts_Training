/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/26/2018 4:55:47 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;

public class Users_AddUser : MonoBehaviour
{
	public static string baseUserUrl = BaseUserUrl.BaseURL + "users";

	//the gameobject references to add a user and to display the result data
	[Header("GameObjects")]
	public GameObject inputPanel;
	public GameObject addUserBtn, detailsPanel, loginBtn;

	//the InputField references for all the input Fields
	[Header("InputFields")]
	public InputField it_fName;
	public InputField it_lName, it_email, it_Pass, it_country;

	//the text Fields for displaying Data
	[Header("TextBoxes")]
	public Text txt_id;
	public Text txt_fname, txt_lastName, txt_email, txt_pass, txt_country, txt_acctype;

	//a UnityWebRequest object to receive output data from sending the request
	UnityWebRequest webReturns;
	////System.Text.UTF8Encoding encoding = new System.Text.UTF8Encoding();

	//activate the input receiving Panel
	void Start()
	{
		inputPanel.SetActive(true);
		addUserBtn.SetActive(true);
		detailsPanel.SetActive(false);
		loginBtn.SetActive(false);
	}


	//On 'AddUser' button pressed, take the data and validate it
	public void AddUserPressed()
	{
		//take the data out of input field to validate and store as a dictionary item
		Dictionary<string, string> formData = new Dictionary<string, string>();
		formData["firstName"] = it_fName.text;		formData["lastName"] = it_lName.text;
		formData["emailId"] = it_email.text;		formData["password"] = it_Pass.text;
		formData["country"] =  it_country.text;
		//send the dictionary object to a validator function
		string validation = AddNewUser.AddUserFormValidation(formData);


		if (validation == "Success")
		{
			//if validation is successful, send the request as string to CallLogin coroutine
			string logindataJsonString = "{ \"id\": \"\", \"firstName\": \"" + it_fName.text + "\", \"lastName\": \""+ it_lName.text + "\", \"emailId\": \"" + it_email.text + "\", \"password\": \"" + it_Pass.text + "\", \"country\": \"" + it_country.text + "\", \"accountType\": \"NORMAL\"}";
			StartCoroutine(CallLogin(baseUserUrl, logindataJsonString));
		}
		else
		{
			//In case the validation fails, print why
			Debug.LogError("Error : "+ validation);
		}
	}


	//coroutine that will call the API
	public IEnumerator CallLogin(string url, string logindataJsonString)
	{
		//decide the method type and create a web request object
		webReturns = new UnityWebRequest(url, "POST");
		//convert the body data to a byte array as it is passed in -d section
		byte[] bodyRaw = Encoding.UTF8.GetBytes(logindataJsonString);

		//using uploadHandler, pass the data as raw data, also create it
			//https://docs.unity3d.com/ScriptReference/Networking.UploadHandler.html
			//handles all information regarding the buffering and transmission of body data during an HTTP request.

		webReturns.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
		//using downloadHandler, we are able to recieve a response from the server
			//https://docs.unity3d.com/ScriptReference/Networking.DownloadHandler.html
			//they define how to handle HTTP response body data received from a remote server

		webReturns.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		//define the Headers for the request
		webReturns.SetRequestHeader("Content-Type", "application/json");


		//calling SendWebRequest ensures the request can no longer be edited, also stops coroutine till it completes in success or failure
		yield return webReturns.SendWebRequest();


		if (webReturns.isDone && !(webReturns.isHttpError || webReturns.isNetworkError))
		{
			Debug.Log("Status Code: " + webReturns.responseCode);
			ShowDataLoaded();
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n" +
				"webReturns text: \n"+webReturns.downloadHandler.ToString());
		}
	}


	void ShowDataLoaded()
	{
		//stop the coroutines
		StopAllCoroutines();

		//enable correct panels
		inputPanel.SetActive(false);
		addUserBtn.SetActive(false);
		detailsPanel.SetActive(true);
		loginBtn.SetActive(true);

		//print the response JSON serialised values
		Debug.Log(webReturns.downloadHandler.text);

		//take the values as class Object
		UserDetails webResponse = JsonUtility.FromJson<UserDetails>(webReturns.downloadHandler.text);

		//make the data visible in new panel
		txt_id.text  = webResponse.id;
		txt_fname.text    = webResponse.firstName;
		txt_lastName.text = webResponse.lastName;
		txt_email.text = webResponse.emailId;
		txt_pass.text = webResponse.password;
		txt_country.text = webResponse.country;
		txt_acctype.text = webResponse.accountType;

		//store necessary details as PlayerPrefs.
		PlayerPrefs.SetString("UserId", webResponse.id);
		PlayerPrefs.SetString("UserName", webResponse.emailId);
		PlayerPrefs.SetString("Password", webResponse.password);
	}
}