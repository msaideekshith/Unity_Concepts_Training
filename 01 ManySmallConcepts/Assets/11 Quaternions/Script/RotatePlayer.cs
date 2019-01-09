using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * aim is to make a code, that will rotate player gradually
 * using input manager for Horizontal axis
 */

public class RotatePlayer : MonoBehaviour
{
	//to store horizontal axis
	float horAxiz;

	//temp Quaternions
	Quaternion Qt1, Qt2= new Quaternion();


	void Update ()
	{
		horAxiz = Input.GetAxis("Horizontal");
		if(horAxiz != 0)
		{
			//take current rotation
			Qt1 = transform.rotation;

			//add the horizontal axis, to the rotation
			Qt2 = Quaternion.Euler(0, horAxiz, 0);
			//For Quaternions, adding values is done by multiplyig them

			//apply the new rotation value to our transform.rotation
			transform.rotation = Qt1 * Qt2;
		}
	}
}
