/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/13/2018 3:06:49 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetection : MonoBehaviour
{

	private void OnCollisionEnter(Collision collisionInfo)
	{
		if(collisionInfo.collider.tag == "Obstacle")
		{
			FindObjectOfType<PlayerMovements>().enabled = false;
			FindObjectOfType<GameManager>().EndGame();
			FindObjectOfType<PlayerMovements>().gameObject.GetComponent<Renderer>().material.color = new Color(0.75f, 0f, 0f, 1);
		}
	}

	private void OnCollisionExit(Collision collisionInfo)
	{
		if (collisionInfo.collider.tag == "Ground")
		{
			FindObjectOfType<PlayerMovements>().enabled = false;
			FindObjectOfType<GameManager>().EndGame();
			FindObjectOfType<PlayerMovements>().gameObject.GetComponent<Renderer>().material.color = new Color(0.75f, 0f, 0f, 1);
		}
	}
}
