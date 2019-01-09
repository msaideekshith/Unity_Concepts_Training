/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JSONurlHandler : MonoBehaviour 
{
	public string fileName = "GivenJson.json", path;
	UrlJason jsonObj = new UrlJason();

	private void Start()
	{
		path = Application.persistentDataPath + "/" + fileName;
	}

	private void Update()
	{
		if(Input.GetKeyDown(KeyCode.K))
		{
			LoadUrl();
		}
	}

	void LoadUrl()
	{
		if(System.IO.File.Exists(path))
		{

			jsonObj =  JsonUtility.FromJson<UrlJason>(System.IO.File.ReadAllText(path));
			foreach(string i in jsonObj.array)
			{
				Debug.Log("url :"+ i);
			}
		}
		else
		{
			Debug.LogError("json url file does not exists");
		}
	}
}
