/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/17/2018 4:51:37 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveDeacctive : MonoBehaviour
{
	public string prefName = "Level0";
	private void Awake()
	{
		if(PlayerPrefs.GetInt(prefName, 0) !=1)
		{
			gameObject.SetActive(false);
		}
	}
}
