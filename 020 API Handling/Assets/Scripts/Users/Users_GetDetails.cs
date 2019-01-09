/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/28/2018 2:08:23 PM
*/
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Users_GetDetails : MonoBehaviour
{
	public static string baseUserUrl = BaseUserUrl.BaseURL + "users/";

	[Header("InputField")]
	//all Input Fields
	public InputField inp_ID;
	public InputField inp_FName, inp_LName, inp_email, inp_pass, inp_country, inp_AccType;

	[Header("Labels")]
	public Text AccessToken;


	UnityWebRequest webRequest;
	#region getDetails (GET)
	void Start ()
	{
		baseUserUrl += PlayerPrefs.GetString("UserId", "/") + "?" + "accessToken=" + PlayerPrefs.GetString("AccToken", "/");
		StartCoroutine(GetDetails());
	}

	IEnumerator GetDetails()
	{
		webRequest = new UnityWebRequest(baseUserUrl, "GET");
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		webRequest.SetRequestHeader("Content-Type", "application/json");
		yield return webRequest.SendWebRequest();
		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Status Code: " + webRequest.responseCode);
			ShowDataLoaded();
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n" +
				"webRequest text: \n" + webRequest.downloadHandler.ToString());
		}
	}

	void ShowDataLoaded()
	{
		StopAllCoroutines();

		//the response from the web
		UserDetails userDetails = JsonUtility.FromJson<UserDetails>(webRequest.downloadHandler.text);
		Debug.Log("User Details Updated:");
		Debug.Log(webRequest.downloadHandler.text);

		//make the data visible in new panel
		inp_ID.text = userDetails.id;
		inp_FName.text = userDetails.firstName;
		inp_LName.text = userDetails.lastName;
		inp_email.text = userDetails.emailId;
		inp_pass.text = userDetails.password;
		inp_country.text = userDetails.country;
		inp_AccType.text = userDetails.accountType;
		AccessToken.text = PlayerPrefs.GetString("AccToken", "");

		//PlayerPrefs.SetString("UserId", webResponse.id);
		PlayerPrefs.SetString("UserName", userDetails.emailId);
		PlayerPrefs.SetString("Password", userDetails.password);
	}

	#endregion getDetails (GET)

	#region Upadte User(PUT)
	public void UpdateDataPressed()
	{
		Dictionary<string, string> formData = new Dictionary<string, string>();
		formData["firstName"] = inp_FName.text; formData["lastName"] = inp_LName.text;
		formData["emailId"] = inp_email.text; formData["password"] = inp_pass.text;
		formData["country"] = inp_country.text;
		//send the dictionary object to a validator function
		string validation = AddNewUser.AddUserFormValidation(formData);


		if (validation == "Success")
		{
			UserDetails newUserDetails = new UserDetails();
			newUserDetails.id = inp_ID.text;
			newUserDetails.firstName = inp_FName.text;
			newUserDetails.lastName = inp_LName.text;
			newUserDetails.emailId = inp_email.text;
			newUserDetails.password = inp_pass.text;
			Debug.Log("new password received : " + newUserDetails.password);
			newUserDetails.country = inp_country.text;
			newUserDetails.accountType = inp_AccType.text;

			string dataBody = JsonUtility.ToJson(newUserDetails, false);

			StartCoroutine(UpdateUserDetails(dataBody));
		}
		else
		{
			Debug.LogError("Invalid Data, plese check the data and try again");
		}
	}

	IEnumerator UpdateUserDetails(string dataBody)
	{
		yield return null;
		//webRequest = new UnityWebRequest(baseUserUrl, "GET");
		//url, method, downloadHandler, UploadHandler
		webRequest = new UnityWebRequest(baseUserUrl, "PUT");
		byte[] bodyRaw = Encoding.UTF8.GetBytes(dataBody);
		webRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

		webRequest.SetRequestHeader("accept", "application/json");
		webRequest.SetRequestHeader("Content-Type", "application/json");
		yield return webRequest.SendWebRequest();

		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Update - Status Code: " + webRequest.responseCode);
			ShowDataLoaded();
		}
		else
		{
			Debug.Log("Update - Status Code: " + webRequest.responseCode);
			Debug.LogError("the web request resulted in an error\n webReturns text: \n" + webRequest.downloadHandler.ToString());
		}
	}
	#endregion

	#region Delete User (DELETE)

	public void DeleteUserPress()
	{
		StartCoroutine(DeleteUserPressed());
	}
	private IEnumerator DeleteUserPressed()
	{
		webRequest = new UnityWebRequest(baseUserUrl, "DELETE");
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

		webRequest.SetRequestHeader("accept", "application/json");
		yield return webRequest.SendWebRequest();

		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Update - Status Code: " + webRequest.responseCode);
			ClearLoaded();
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n webReturns text: \n" + webRequest.downloadHandler.ToString());
		}
	}

	void ClearLoaded()
	{
		StopAllCoroutines();

		//make the data visible in new panel
		inp_ID.text		 = "";
		inp_FName.text	 = "";
		inp_LName.text	 = "";
		inp_email.text	 = "";
		inp_pass.text	 = "";
		inp_country.text = "";
		inp_AccType.text = "";
		AccessToken.text = "";

		PlayerPrefs.DeleteAll();
	}
	#endregion
}
