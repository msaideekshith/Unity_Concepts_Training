using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrumpController : MonoBehaviour
{
	Rigidbody rb;
	float xVal, zVal;

	Vector3 movement;

	private void Start()
	{
		rb = GetComponent<Rigidbody>();
	}

	private void Update()
	{
		xVal = Input.GetAxis("Mouse X");
		zVal = Input.GetAxis("Mouse Y");
		Debug.Log("x: "+xVal + ", Y: "+zVal);
		movement = new Vector3(xVal, 0, zVal);
		rb.velocity = movement * 3f;

		if(xVal != 0 && zVal != 0)
		{
			transform.eulerAngles = new Vector3(transform.eulerAngles.x, Mathf.Atan2(xVal, zVal) * Mathf.Rad2Deg, transform.eulerAngles.z);

		}
	}

}
