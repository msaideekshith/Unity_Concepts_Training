/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RayCastLengthTest : MonoBehaviour 
{
	public Text showText;

	Ray ray;
	RaycastHit hit;

	void Start () 
	{
		
	}
	
	void Update () 
	{
		
		if (Input.GetMouseButton(0))
		{
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (!Physics.Raycast(ray, out hit))
			{
				Debug.Log("not hit ray distance : " + hit.distance);
				showText.text = "not hit ray distance : " + hit.distance;
			}
			else
			{
				Debug.Log("hit ray distance : " + hit.distance);
				showText.text = "hit ray distance : " + hit.distance;
			}
		}
	
	}
}
