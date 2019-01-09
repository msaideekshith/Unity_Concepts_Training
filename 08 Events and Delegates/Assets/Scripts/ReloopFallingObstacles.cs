using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReloopFallingObstacles : MonoBehaviour
{
	public float fallSpeed;
	Vector3 currPos;
	//7.5 to -5.5

	private void LateUpdate()
	{
		currPos = transform.position;

		if (currPos.y < -5.5f)
		{
			transform.position = new Vector3(Random.Range(-9.0f, 9.0f), 7.5f, 0);
		}
		else
		{
			transform.position = new Vector3(currPos.x, currPos.y - (0.1f * fallSpeed), currPos.z);
		}
	}
}
