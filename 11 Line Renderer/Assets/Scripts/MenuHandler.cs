/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuHandler : MonoBehaviour 
{

	public void LoadSceneWithIndex(int ind)
	{
		if (ind < UnityEngine.SceneManagement.SceneManager.sceneCountInBuildSettings)
		{
			UnityEngine.SceneManagement.SceneManager.LoadScene(ind);
		}
		else
		{
			Debug.Log("ind is "+ ind);
			Debug.Log("sceneCountInBuildSettings is " + UnityEngine.SceneManagement.SceneManager.sceneCountInBuildSettings);
		}
	}
	
}
