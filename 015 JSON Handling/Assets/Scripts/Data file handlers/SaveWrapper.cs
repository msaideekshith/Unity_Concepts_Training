/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveWrapper : MonoBehaviour 
{
	public string fileName = "dataWrapped.json";
	string path;

	GameData gameData = new GameData();

	private void Start()
	{
		path = Application.persistentDataPath + "/" + fileName;
		Debug.Log("saving the file as : " + path);
	}

	private void Update()
	{
		if (Input.GetKeyDown(KeyCode.S))
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
		JsonWrapper wrapper = new JsonWrapper();
		wrapper.gamedata = gameData;
		string content = JsonUtility.ToJson(wrapper, true);
		System.IO.File.WriteAllText(path, content);
	}

	void LoadDataFn()
	{
		try
		{
			if (System.IO.File.Exists(path))
			{
				string contents = System.IO.File.ReadAllText(path);
				JsonWrapper wrapper = JsonUtility.FromJson<JsonWrapper>(contents);
				gameData = wrapper.gamedata;

			}
			else
			{
				Debug.LogError("Unable to read data, file does not exists");
			}
		}
		catch (System.Exception ex)
		{
			Debug.LogError("error : " + ex.Message);
		}
	}
}
