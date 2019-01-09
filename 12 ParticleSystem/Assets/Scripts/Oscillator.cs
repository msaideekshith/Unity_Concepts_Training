/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Oscillator : MonoBehaviour 
{
	public bool Oscillating = true;
	public Transform pointA, pointB;
	[Range(0.2f, 5f)]
	public float oscillatingSpeed = 0.5f;
	public float minSpeed = 0.2f;

	bool towardsA;
	float oscSpeed;

	void Start () 
	{
		
	}
	
	void Update () 
	{
		if(Oscillating)
		{
			oscSpeed = oscillatingSpeed * Time.deltaTime > minSpeed ? oscillatingSpeed * Time.deltaTime : minSpeed;
			if (towardsA)
			{
				transform.position = Vector3.Lerp(transform.position, pointA.position, oscSpeed);
				if(Vector3.Distance(transform.position,pointA.position) <= 0.15f)
				{
					towardsA = !towardsA;
				}
			}
			else
			{
				transform.position = Vector3.Lerp(transform.position, pointB.position, oscSpeed);
				if (Vector3.Distance(transform.position, pointB.position) <= 0.15f)
				{
					towardsA = !towardsA;
				}
			}
		}
	}
}
