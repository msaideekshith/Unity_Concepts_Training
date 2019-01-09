/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DoubleTapTest : MonoBehaviour 
{
	public Text singleTapText, doubleTapText;

	void Update()
	{
		if (Input.touchCount == 0)
		{
			singleTapText.text = "-";
			doubleTapText.text = "-";
		}
		if (Input.touchCount == 2)
		{
			singleTapText.text = "tap count = " + Input.GetTouch(0).tapCount;
			doubleTapText.text = "tap count = " + Input.GetTouch(1).tapCount;
		}
		if (Input.touchCount == 1)
		{
			singleTapText.text =  "tap count = " + Input.GetTouch(0).tapCount;
			doubleTapText.text = "";
		}
	}
}
