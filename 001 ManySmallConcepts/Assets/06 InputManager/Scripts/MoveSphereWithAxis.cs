using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSphereWithAxis : MonoBehaviour
{
	public GameObject ControlledObj;
	public float xLimMin, xLimMax, yLimMin, yLimMax;
	float hVal, vVal;

	float startingXVal, startingYVal, startingZVal;

	private void Start()
	{
		startingXVal = transform.position.x;
		startingYVal = transform.position.y;
		startingZVal = transform.position.z;
	}

	private void Update()
	{
		hVal = Input.GetAxis("Horizontal");
		vVal = Input.GetAxis("Vertical");


		transform.position = new Vector3(startingXVal + (hVal * (xLimMax - xLimMin)/2 ),
										 startingYVal + (vVal * (yLimMax - yLimMin)/2 ),
										 startingZVal + (0) );
	}
}
