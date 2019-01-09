/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/20/2018 12:40:16 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class ValidateUserWin : MonoBehaviour
{

	void Start ()
	{
		Social.localUser.Authenticate(success => {
			if (success)
			{
				//Debug.Log("Authentication successful");
				string userInfo = "Username: " + Social.localUser.userName +
					"\nUser ID: " + Social.localUser.id +
					"\nIsUnderage: " + Social.localUser.underage +
					"\nState" + Social.localUser.state
					;

				Debug.Log(userInfo);
				Invoke("NewScene", 5f);
			}
			else
				Debug.Log("Authentication failed");
		});
	}

	void NewScene ()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}
}
