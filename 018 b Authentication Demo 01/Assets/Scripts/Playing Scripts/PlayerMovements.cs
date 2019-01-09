/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/13/2018 2:38:23 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovements : MonoBehaviour
{
	public static PlayerMovements Instance;
	public float forwardForce = 2000f;
	public float sidewaysForce = 500;
	//[HideInInspector]
	public bool moveRight, moveLeft;
	Rigidbody rb;

	void Start ()
	{
		Instance = this;
		rb = GetComponent<Rigidbody>();
	}

	void Update ()
	{
		rb.AddForce(0, 0, forwardForce * Time.deltaTime);

		if(moveRight)
		{
			if(!Input.GetMouseButton(0)){ moveRight = false; }
			MoveRight();
		}
		else if(moveLeft)
		{
			if (!Input.GetMouseButton(0)) { moveLeft = false; }
			MoveLeft();
		}
	}

	void MoveRight()
	{
		rb.AddForce(sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
	}

	void MoveLeft()
	{
		rb.AddForce(-sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
	}
}
