/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/15/2018 11:44:31 AM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LearningVariables : MonoBehaviour
{
	public float floatNum = 13.5f;
	public int intNum = 5;
	public string stringVal = "14";

	private void Start()
	{
		Debug.Log("Hi world");

		Debug.Log("val "+ AddIt());
	}

	float AddIt()
	{
		floatNum += 3;
		return floatNum;
	}
}
