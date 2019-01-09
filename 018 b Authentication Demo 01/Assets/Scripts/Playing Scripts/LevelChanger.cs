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
			Debug.Log("Game Just Started");
		}
	}

	private void OnTriggerEnter(Collider other)
	{
		FindObjectOfType<PlayerMovements>().enabled = false;
		Invoke("ChangeLevel",1f);
		levelCompleteScreen.SetActive(true);
		FindObjectOfType<GameManager>().UpdateScore();
		Invoke("Nxtlevel", 3.2f);
		//if continue == 1, add current score to new scores.
		PlayerPrefs.SetInt("Continue", 1);
		PlayerPrefs.SetInt("Score", PlayerScore.Instance.score);
	}

	void Nxtlevel()
	{
		FindObjectOfType<GameManager>().NextLevel();
	}
}
