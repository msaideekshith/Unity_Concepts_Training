/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/28/2018 4:32:42 PM
*/
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Books_GetThumbnail : MonoBehaviour
{
	public InputField inp_BookId, inp_accessToken;
	public Image thumbnailImage;
	public string fileLocation, fileName2Store;

	public void GetThumbnailPressed()
	{
		if (inp_BookId.text == null || inp_BookId.text == "" || inp_accessToken.text == null || inp_accessToken.text == "")
		{
			inp_accessToken.text = "46fc615c-d00d-460e-a4cd-4e404c546e091416681545992233571";
			inp_BookId.text = "37474bf9-bf60-472b-add3-b591514da246";
		}
		string thumbnailUrl = BaseBooksUrl.baseBookUrl + inp_BookId.text + "/thumbnail?accessToken=" + inp_accessToken.text;
		StartCoroutine(GetDetails(thumbnailUrl));
	}

	IEnumerator GetDetails(string url)
	{
		UnityWebRequest webRequest = new UnityWebRequest(url, "GET");
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		webRequest.SetRequestHeader("Content-Type", "application/octet-stream");
		webRequest.SetRequestHeader("Content-Disposition",  "attachment");
		yield return webRequest.SendWebRequest();
		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Status Code: " + webRequest.responseCode);
			//ShowDataLoaded(webRequest);
			UpdateImageDownloaded(webRequest);
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n" +
				"webRequest text: \n" + webRequest.downloadHandler.ToString());
		}
	}
	#region Not in Use
	void ShowDataLoaded(UnityWebRequest webResponse)
	{
		//Response Headers
		foreach(string i in webResponse.GetResponseHeaders().Keys)
		{
			Debug.Log(i +" : "+ webResponse.GetResponseHeader(i) );
		}

		int startIndex, endIndex;
		startIndex = webResponse.GetResponseHeader("Content-Disposition").IndexOf("\"", 0) + 1;
		endIndex = webResponse.GetResponseHeader("Content-Disposition").IndexOf("\"", startIndex);

		string responseFileName = webResponse.GetResponseHeader("Content-Disposition").Substring(startIndex,endIndex - startIndex);
		Debug.Log("Start Index : "+startIndex + "\n End Index : "+endIndex);
		Debug.Log("response file name : "+ responseFileName);


		Debug.Log("Byte array is " + webResponse.downloadHandler.data);
		Debug.Log("Byte string is " + webResponse.downloadHandler.text );
		Texture2D newImage = new Texture2D(100, 100);
		newImage.LoadImage(webResponse.downloadHandler.data);

		Sprite newPng = Sprite.Create(newImage, new Rect(0, 0, newImage.width, newImage.height), new Vector2(0.5f, 0.5f));
		if (newPng == null)
		{
			Debug.LogError("Image is null, test the Texture created");
		}
		else
		{
			thumbnailImage.sprite = newPng;
			thumbnailImage.gameObject.SetActive(true);
		}
		//Debug.Log("the output data");
		//Debug.Log(webResponse.);
	}
	#endregion

	void UpdateImageDownloaded(UnityWebRequest webResponse)
	{
		//Debug.Log("Byte array is " + webResponse.downloadHandler.data);
		Texture2D thumbnailTexture = new Texture2D(100, 100);
		thumbnailTexture.LoadImage(webResponse.downloadHandler.data); //from byte stream

		Sprite newPng = Sprite.Create(thumbnailTexture, new Rect(0, 0, thumbnailTexture.width, thumbnailTexture.height), new Vector2(0.5f, 0.5f));
		if (newPng == null)
		{
			Debug.LogError("Image is null, test the Texture created");
		}
		else
		{
			thumbnailImage.sprite = newPng;
			thumbnailImage.gameObject.SetActive(true);
			string filePath = fileLocation + "/" + fileName2Store;
			byte[] bytes = thumbnailTexture.EncodeToPNG();
			FileStream PNGfile;
			if (File.Exists(filePath))
			{
				PNGfile = File.OpenWrite(filePath);
			}
			else
			{
				PNGfile = File.Create(filePath);

			}
			BinaryWriter bf = new BinaryWriter(PNGfile);
			bf.Write(bytes);
			PNGfile.Close();
		}
	}
}
