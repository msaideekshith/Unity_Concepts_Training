/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/17/2018 4:54:26 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelChanger : MonoBehaviour
{
	public GameObject levelCompleteScreen;
	private void Awake()
	{
		if(PlayerPrefs.GetInt("HighScore", 0) == 0)
		{
			ChangeLevel(1);
		}
	}

	public void ChangeLevel()
	{
		if (PlayerPrefs.GetInt("LevelNum", 0) != 1)
		{
			PlayerPrefs.SetInt("LevelNum", 1);
			PlayerPrefs.SetInt("Level01", 1);
			PlayerPrefs.SetInt("Level02", 0);
		}
		else
		{
			PlayerPrefs.SetInt("LevelNum", 2);
			PlayerPrefs.SetInt("Level01", 0);
			PlayerPrefs.SetInt("Level02", 1);
		}
	}

	public void ChangeLevel(int levelNum)
	{
		if (levelNum  == 1)
		{
			PlayerPrefs.SetInt("LevelNum", 1);
			PlayerPrefs.SetInt("Level01", 1);
			PlayerPrefs.SetInt("Level02", 0);
		}
		else
		{
			PlayerPrefs.SetInt("LevelNum", 2);
			PlayerPrefs.SetInt("Level01", 0);
			PlayerPrefs.SetInt("Level02", 1);
		}
	}

	private void OnTriggerEnter(Collider other)
	{
		FindObjectOfType<PlayerMovements>().enabled = false;
		Invoke("ChangeLevel",1f);
		levelCompleteScreen.SetActive(true);
		FindObjectOfType<GameManager>().UpdateScore();
		Invoke("Restartlevel", 3.2f);
	}

	void Restartlevel()
	{
		FindObjectOfType<GameManager>().Restart();
	}
}
