using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//attach this script to the player character
[RequireComponent(typeof(Animation))]
public class AnimatrionControls : MonoBehaviour
{
	public float movementSpeed;

	Animation myAnimation;
	//states are idle, walk, wave
	Vector3 targetMapPos;
	bool targetAvailable;
	RaycastHit hitInfo;
	Ray mouseRay;

	private void Start()
	{
		myAnimation = GetComponent<Animation>();
	}

	// Update is called once per frame
	void Update ()
	{
		if (Input.GetMouseButtonDown(0))
		{
			mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(mouseRay, out hitInfo))
			{
				targetMapPos = hitInfo.point;
				targetAvailable = true;
				myAnimation.Play("walk");
				transform.LookAt(targetMapPos);
			}
		}
		if(targetAvailable)
		{
			transform.position = Vector3.Lerp(transform.position, targetMapPos, Time.deltaTime * movementSpeed);
			if(Vector3.Distance(transform.position, targetMapPos) <= 0.2f)
			{
				myAnimation.Play("wave");
				targetAvailable = false;
			}
		}
		if(!myAnimation.isPlaying)
		{
			myAnimation.Play("idle");
		}
	}
}
