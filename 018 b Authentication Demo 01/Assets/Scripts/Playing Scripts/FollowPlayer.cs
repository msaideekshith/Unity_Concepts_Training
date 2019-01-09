/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/13/2018 2:58:17 PM
*/
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
	public Transform Player;
	Vector3 offset;
	void Start ()
	{
		if(Player == null)
		{
			Player = FindObjectOfType<PlayerMovements>().transform;
		}
		offset = transform.position - Player.position;
	}

	void Update ()
	{
		try
		{
			transform.position = Player.position + offset;
		}
		catch(Exception expt)
		{
			Debug.Log(expt.Message);
			Debug.Log("player Position : "+Player.position);
			Debug.Log("offset : "+ offset);
		}
	}
}
