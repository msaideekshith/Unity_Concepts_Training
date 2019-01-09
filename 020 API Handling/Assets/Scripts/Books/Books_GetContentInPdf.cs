/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/31/2018 2:35:16 PM
*/
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Books_GetContentInPdf : MonoBehaviour
{
	public InputField inp_BookId, inp_accessToken;
	public string filePath, fileName2Store;
	private string bookUrl ;
	private UnityWebRequest webRequest;
	public void GetContentPressed()
	{
		if (inp_BookId.text == null || inp_BookId.text == "" || inp_accessToken.text == null || inp_accessToken.text == "")
		{
			inp_accessToken.text = "46fc615c-d00d-460e-a4cd-4e404c546e091416681545992233571";
			inp_BookId.text = "50d54395-726e-4c41-8207-ff543195ec53";
		}

		bookUrl = BaseBooksUrl.baseBookUrl + "/" + inp_BookId.text + "/content?accessToken=" + inp_accessToken.text;
		StartCoroutine(DownloadContent());
	}

	IEnumerator DownloadContent()
	{
		yield return null;
		webRequest = new UnityWebRequest(bookUrl, "GET");
		webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		webRequest.SetRequestHeader("Content-Type", "application/octet-stream");

		yield return webRequest.SendWebRequest();

		if (webRequest.isDone && !(webRequest.isHttpError || webRequest.isNetworkError))
		{
			Debug.Log("Status Code: " + webRequest.responseCode);
			SaveByteAsPdf();
		}
		else
		{
			Debug.LogError("the web request resulted in an error\n" +
				"webRequest text: \n" + webRequest.downloadHandler.ToString());
		}
	}

	void SaveByteAsPdf()
	{
		string fileDestination = filePath + "/" + fileName2Store;
		if (!fileDestination.EndsWith(".pdf"))
		{
			fileDestination += ".pdf";
		}
		Debug.Log("Final Path : "+ fileDestination);

		if (int.Parse(webRequest.GetResponseHeader("Content-length")) <= 0)
		{
			Debug.LogWarning("The file has no content");
		}
		else
		{
			Debug.Log("The file size is '" + webRequest.GetResponseHeader("Content-length") +"' .");
		}
		FileStream PDFfile;
		if (File.Exists(fileDestination))
		{
			PDFfile = File.OpenWrite(fileDestination);
			Debug.Log("old file overwritten");
		}
		else
		{
			PDFfile = File.Create(fileDestination);
			Debug.Log("new file created");

		}
		BinaryWriter bf = new BinaryWriter(PDFfile);
		bf.Write(webRequest.downloadHandler.data);
		Debug.Log("data written");
		PDFfile.Close();
		Debug.Log("file closed");
	}
}
