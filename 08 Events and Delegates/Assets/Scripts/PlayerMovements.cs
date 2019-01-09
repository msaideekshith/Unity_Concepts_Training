using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovements : MonoBehaviour
{
	public float speed;
	float hVal; //, vVal;
	Vector3 curPos;

	private void Update()
	{
		hVal = Input.GetAxis("Horizontal");
		curPos = transform.position;

		transform.position = new Vector3(Mathf.Clamp(curPos.x + (hVal * speed), -8.4f, 8.4f), curPos.y, curPos.z);
	}
}
