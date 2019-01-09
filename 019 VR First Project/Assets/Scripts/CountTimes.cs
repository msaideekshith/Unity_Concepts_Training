/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/15/2018 1:17:56 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountTimes : MonoBehaviour
{
	public GameObject otherObject;

	public void Looking()
	{
		otherObject.SetActive(false);
	}

	public void NotLooking()
	{
		otherObject.SetActive(true);
	}
}
