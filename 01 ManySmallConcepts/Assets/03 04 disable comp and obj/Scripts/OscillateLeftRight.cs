using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OscillateLeftRight : MonoBehaviour {

	public float rangeFromInitial = 0;


	private float startXPos;
	private bool goingRight;
	[SerializeField]
	private float oscillatingSpeed = 50;

	void Start()
	{
		startXPos = transform.position.x;
		goingRight = true;
	}

	// Update is called once per frame
	void Update()
	{

		if (transform.position.x > startXPos + rangeFromInitial)
			goingRight = false;
		else if (transform.position.x < startXPos - rangeFromInitial)
			goingRight = true;


		if (goingRight)
		{
			transform.Translate(Vector3.right * Time.deltaTime * oscillatingSpeed);
		}
		else
		{
			transform.Translate(-Vector3.right * Time.deltaTime * oscillatingSpeed);
		}
	}
}
