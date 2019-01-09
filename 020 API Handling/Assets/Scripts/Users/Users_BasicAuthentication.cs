/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/28/2018 12:26:17 PM
*/
using System.Collections;
using System.Collections.Generic;
using System.Text; //for Encoding
using UnityEngine;
using UnityEngine.Networking; // for UnityWebRequest
using UnityEngine.UI; //for Text and InputField

public class Users_BasicAuthentication : MonoBehaviour
{
	public static string baseUserUrl = BaseUserUrl.BaseURL + "authentication/basic";

	[Header("GameObjects")]
	public GameObject loginPanel;
	public GameObject loginBtn, userDetailsPanel, copyAccessTokenBtn;

	[Header("InputFields")]
	public InputField it_Username;
	public InputField it_Password;

	[Header("TextFields")]
	public Text txt_id;
	public Text txt_fname, txt_lastName, txt_email, txt_pass, txt_country, txt_acctype, txt_accessToken;

	//a UnityWebRequest object to receive output data from sending the request
	UnityWebRequest webRequest;
	public void Start()
	{
		loginPanel.SetActive(true);
		loginBtn.SetActive(true);
		userDetailsPanel.SetActive(false);
		copyAccessTokenBtn.SetActive(false);
	}

	public void LogInPressed()
	{
		if(!ValidateInput())
		{
			Debug.LogError("Please type in both username and password before using Log In button");
			return;
		}

		//create request string to sent to API
		LogInRequest webRequestData = new LogInRequest(it_Username.text, it_Password.text);
		string request = JsonUtility.ToJson(webRequestData, false); //need not format data as computer will read it.

		StartCoroutine(BasicAuthenticateUser(baseUserUrl, request));


	}

	bool ValidateInput()
	{
		if(it_Username.text != null && it_Username.text != ""
			&&
			it_Password.text != null && it_Password.text != "")
		{
			return true;
		}
		return false;
	}

	IEnumerator BasicAuthenticateUser(string url, string logindataJsonString)
	{
		yield return null;
		webRequest = new UnityWebRequest(url, "POST");
		byte[] bodyRaw = Encoding.UTF8.GetBytes(logindataJsonString);
		webRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		webRequest.SetRequestHeader("Content-Type", "application/json");

		yield return webRequest.SendWebRequest();

		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Status Code: " + webRequest.responseCode);
			ShowDataFetched();
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n webReturns text: \n" + webRequest.downloadHandler.ToString());
		}
	}

	void ShowDataFetched()
	{
		//change visible panels
		loginPanel.SetActive(false);
		loginBtn.SetActive(false);
		userDetailsPanel.SetActive(true);
		copyAccessTokenBtn.SetActive(true);

		LogInResponse webResponse = JsonUtility.FromJson<LogInResponse>(webRequest.downloadHandler.text);
		Debug.LogWarning(webRequest.downloadHandler.text);


		//make the data visible in new panel
		txt_accessToken.text = webResponse.accessToken;

		Debug.Log("txt_id.text = " + webResponse.user.id);
		txt_id.text = webResponse.user.id;

		Debug.Log("txt_fname.text = " + webResponse.user.firstName);
		txt_fname.text = webResponse.user.firstName;

		Debug.Log("txt_lastName.text = " + webResponse.user.lastName);
		txt_lastName.text = webResponse.user.lastName;
		txt_email.text = webResponse.user.emailId;
		txt_pass.text = webResponse.user.password;
		txt_country.text = webResponse.user.country;
		txt_acctype.text = webResponse.user.accountType;

		//set necessary values as PlayerPrefs
		PlayerPrefs.SetString("AccToken", webResponse.accessToken);
	}


	public void CopyAccessToken()
	{
		GUIUtility.systemCopyBuffer = PlayerPrefs.GetString("AccToken","Sorry, Mistake Occured");
	}

}
