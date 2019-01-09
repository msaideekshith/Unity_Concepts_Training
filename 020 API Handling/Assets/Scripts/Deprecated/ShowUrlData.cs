/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/26/2018 2:25:32 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ShowUrlData : MonoBehaviour
{
	public const string Base_URL = "http://192.163.244.92:7999/MariaPublishers/services/swagger.json";
	public Text DataText;

	public void ButtonPressed ()
	{
		StartCoroutine(GetText());
	}

	IEnumerator GetText()
	{
		using (UnityWebRequest www = UnityWebRequest.Get(Base_URL))
		{
			yield return www.SendWebRequest();

			if (www.isNetworkError || www.isHttpError)
			{
				Debug.Log(www.error);
			}
			else
			{
				// Show results as text
				DataText.text = www.downloadHandler.text;

				// Or retrieve results as binary data
				byte[] results = www.downloadHandler.data;
			}
		}
	}
}
