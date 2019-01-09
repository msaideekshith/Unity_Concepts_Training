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
	public float forwardForce = 2000f;
	public float sidewaysForce = 500;
	Rigidbody rb;

	void Start ()
	{
		rb = GetComponent<Rigidbody>();
	}

	void Update ()
	{
		rb.AddForce(0, 0, forwardForce * Time.deltaTime);

		if(Input.GetAxis("Horizontal") > 0)
		{
			rb.AddForce(sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
		}
		else if(Input.GetAxis("Horizontal") < 0)
		{
			rb.AddForce(-sidewaysForce * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
		}
	}
}
