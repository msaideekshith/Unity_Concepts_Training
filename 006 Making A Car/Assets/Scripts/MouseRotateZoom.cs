using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
 * Original reference
 * https://www.youtube.com/watch?v=bVo0YLLO43s 
	 */

public class MouseRotateZoom : MonoBehaviour
{
	private Transform _controlledCamera, _cameraParent;
	private Vector3 _localRotation;
	private float _camDistance = 10, _mouseX, _mouseY;
	private float _scrollAmt;
	private Quaternion _newRotation;

	public float mouseSensitivity, scrollSensitivity, orbitDampening, scrollDampning;
	public bool cameraDisabled = false;
	public float closestZoom = 1.5f, furthestZoom = 70;
	[Tooltip("min and max angle to look at target")]
	public float lowestViewAngle = 0, highestViewAngle = 90;

	private void Start()
	{
		Debug.LogWarning("MouseRotateZoom handles the lookaround, ");
		//define how sensitive is mouse rotations
		mouseSensitivity = mouseSensitivity == 0 ? 4f : mouseSensitivity;

		//define how sensitive is your zoom scroll effect
		scrollSensitivity = scrollSensitivity == 0 ? 2f : scrollSensitivity;

		//the next two variables are used in Lerp to ensure the movement doesn't appear as steps/jumps
		//increasing it makes faster rotations for same sensitivity
		orbitDampening = orbitDampening == 0 ? 10f : orbitDampening;
		//defines how fast will camera move for a given scroll
		scrollDampning = scrollDampning == 0 ? 6f : scrollDampning;

		_controlledCamera = transform;
		_cameraParent = transform.parent;
		_newRotation = new Quaternion();

		//setting up as per dsecided values
		_localRotation = new Vector3(78.80006f, 8.000001f, 0);
		_camDistance = 4.117884f;
		_scrollAmt = 0.2628437f;

		
	}

	private void LateUpdate()
	{
		if (Input.GetKeyDown(KeyCode.C))
		{
			cameraDisabled = !cameraDisabled;
		}

		if (!cameraDisabled)
		{
			//rotate camera based on mouse movements
			_mouseX = Input.GetAxis("Mouse X");
			_mouseY = Input.GetAxis("Mouse Y");
			if (_mouseX != 0 || _mouseY != 0)
			{
				_localRotation.x += _mouseX * mouseSensitivity;
				_localRotation.y -= _mouseY * mouseSensitivity;

				//rotating around to see up and down you want to limit for 0 to 90 degrees
				//because at 0 you are looking from top, and at 90 from side
				_localRotation.y = Mathf.Clamp(_localRotation.y, lowestViewAngle, highestViewAngle);
			}

			//For Zooming we have to make sure that Scroll input from Mouse is taken into consideration
			if (Input.GetAxis("Mouse ScrollWheel") != 0)
			{
				//multiply input with sensitivity
				_scrollAmt = Input.GetAxis("Mouse ScrollWheel") * scrollSensitivity;

				//multiply this value to a small value taking your current distance to target object
				//this will ensure you zoom faster away from target and slower closer to target
				_scrollAmt = _scrollAmt * _camDistance * 0.3f;

				//now that we have a new Scroll amount decided, we calculate the new distance from target Object
				_camDistance += _scrollAmt * -1;
				//-1 because, if scroll was +Ve, our distance decreases and vice versa

				//but if the camera can go opp direction because of zoom, that will seem wrong
				//similarly, if we go too far, we will loose the object from view
				if (closestZoom < furthestZoom)
					_camDistance = Mathf.Clamp(_camDistance, closestZoom, furthestZoom);
			}

			//Now that we calculated rotation and Zoom, Lets implement it to the camera and it's parent
			//create a quaternion with rotation decided by us
			_newRotation = Quaternion.Euler(_localRotation.y, _localRotation.x, 0);
			_cameraParent.rotation = Quaternion.Lerp(_cameraParent.rotation, _newRotation, orbitDampening * Time.deltaTime);

			//move camera local position to scroll (Zoom)
			if (_controlledCamera.localPosition.z != _camDistance * -1)
			{
				_controlledCamera.localPosition = new Vector3(0, 0, Mathf.Lerp(_controlledCamera.localPosition.z, _camDistance * -1, Time.deltaTime * scrollDampning));
			}
		}
	}
}

