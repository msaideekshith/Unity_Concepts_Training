/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveData : MonoBehaviour
{
	public string fileName = "data.json";
	string path;

	GameData gameData = new GameData();

	private void Start()
	{
		path = Application.persistentDataPath + "/" + fileName;
		Debug.Log("saving the file as : "+path);
	}

	private void Update()
	{
		if(Input.GetKeyDown(KeyCode.S))
		{
			gameData.date = System.DateTime.Now.ToShortDateString();
			gameData.time = System.DateTime.Now.ToShortTimeString();

			SaveDataFn();
		}

		if (Input.GetKeyDown(KeyCode.L))
		{
			LoadDataFn();

			Debug.Log("Game data Date : " + gameData.date);
			Debug.Log("Game data Time : " + gameData.time);
		}
	}

	void SaveDataFn()
	{
		string content = JsonUtility.ToJson(gameData, true);
		System.IO.File.WriteAllText(path, content);
	}

	void LoadDataFn()
	{
		try
		{
			if (System.IO.File.Exists(path))
			{
				string contents = System.IO.File.ReadAllText(path);
				gameData = JsonUtility.FromJson<GameData>(contents);
			}
			else
			{
				Debug.LogError("Unable to read data, file does not exists");
			}
		}
		catch(Exception ex)
		{
			Debug.LogError("error : "+ex.Message);
		}
	}
}
