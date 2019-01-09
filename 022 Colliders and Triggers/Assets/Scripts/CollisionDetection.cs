/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 1/8/2019 10:25:24 AM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetection : MonoBehaviour
{
	float timer;
	private void OnCollisionEnter(Collision sam)
	{
		if (sam.collider.tag == "Obstacle" ||
			sam.collider.tag == "Ground")
		{
			Debug.Log("I just collided with " + sam.collider.name);
			Debug.Break();
		}
	}

	private void OnCollisionStay(Collision collision)
	{
		if (collision.collider.tag == "Ground")
		{
			timer += Time.deltaTime;
		}
	}

	private void OnCollisionExit(Collision collision)
	{
		Debug.Log("Stopped Colliding with "+ collision.collider.name);
		if (collision.collider.tag == "Ground")
		{
			Debug.Log("the contact was for " + timer + " seconds");
			Debug.Break();
		}
	}
}
