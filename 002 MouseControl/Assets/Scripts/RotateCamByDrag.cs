using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCamByDrag : MonoBehaviour
{
	public float rotSpeed = 10f;
	private float _rotX, _rotY;

	private void OnMouseDrag()
	{
		//Debug.Log("Entered Drag");
		_rotX = Input.GetAxis("Mouse X") * rotSpeed * Mathf.Deg2Rad;
		//rotation = Axis * speed * constant.
		//The Constant Value Mathf.Deg2Rad is used to convert angle in degrees to radians
		//This ensures our variable has angles in Radians
		_rotY = Input.GetAxis("Mouse Y") * rotSpeed * Mathf.Deg2Rad;

		//now the code to rotate across X and Y axis
		transform.Rotate(Vector3.up, -_rotX); //to rotate about X plane, we rotate on Y axis
		transform.Rotate(Vector3.right, _rotY); // to move up and down, we rotate on X axis



	}
}
