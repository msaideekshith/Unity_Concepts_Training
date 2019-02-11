using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomRotation : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		transform.rotation = Quaternion.Euler
			(
				new Vector3
				(
					transform.rotation.eulerAngles.x + Random.value,
					transform.rotation.eulerAngles.y + Random.value,
					transform.rotation.eulerAngles.z + Random.value
				)
			);
	}
}
