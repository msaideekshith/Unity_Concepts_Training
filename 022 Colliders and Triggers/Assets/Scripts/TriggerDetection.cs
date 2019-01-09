/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 1/8/2019 10:46:12 AM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerDetection : MonoBehaviour
{
	private void OnTriggerEnter(Collider other)
	{
		Debug.Log("Danger Zone");
	}

	private void OnTriggerStay(Collider other)
	{

	}

	private void OnTriggerExit(Collider other)
	{
		Debug.Log("About to fall");
		Debug.Break();
	}
}

