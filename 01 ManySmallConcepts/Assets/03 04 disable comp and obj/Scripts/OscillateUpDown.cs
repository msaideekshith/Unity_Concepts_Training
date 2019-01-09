using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OscillateUpDown : MonoBehaviour
{
	public float rangeFromInitial=0;


	private float startYPos;
	private bool goingUp;
	[SerializeField]
	private float oscillatingSpeed = 50;

	void Start ()
	{
		startYPos = transform.position.y;
		goingUp = true;
	}
	
	// Update is called once per frame
	void Update ()
	{

		if (transform.position.y > startYPos + rangeFromInitial)
			goingUp = false;
		else if(transform.position.y < startYPos - rangeFromInitial)
			goingUp = true;


		if (goingUp)
		{
			transform.Translate(Vector3.up * Time.deltaTime * oscillatingSpeed);
		}
		else
		{
			transform.Translate(-Vector3.up * Time.deltaTime * oscillatingSpeed);
		}
	}
}
