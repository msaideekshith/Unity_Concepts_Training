/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnScreenTap_scene2 : MonoBehaviour
{
	[Range(0.2f, 5f)]
	public float moveSpeed;
	public Transform movingObject;
	public LineRenderer renderingLine;
	public Transform startPosTransform;

	private Vector3 startPos, endPos;
	private Ray ray;
	private RaycastHit hit;
	private Vector3 destPos;
	private bool destPosActive = false;

	//we are using layerMask to ensure only surface is clickable
	public LayerMask hitLayer;

	private void Start()
	{
		//hitLayer = LayerMask.GetMask("ClickableWalls");
		destPos = movingObject.position;
		renderingLine.positionCount = 3;
		startPos = startPosTransform.position;
		renderingLine.SetPosition(0, startPos);
		ResetLineRenderer();
	}


	void Update()
	{
		if (Input.GetButton("Cancel"))
		{
			OnEscapePresed();
		}

		if (Input.GetMouseButtonDown(0))
		{
			ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			/*Didn't work
			* if (Physics.Raycast(ray, out hit, hitLayer))
			*/
			//this works
			if (Physics.Raycast(ray, out hit, Mathf.Infinity, hitLayer))
			{
				destPos = hit.point;
				CalculateMidPoint();
				renderingLine.SetPosition(2, destPos);
				destPosActive = true;
			}
		}


		if (destPosActive == true)
		{
			movingObject.position = Vector3.Lerp(movingObject.position, destPos, Time.deltaTime * moveSpeed);

			if (Vector3.Distance(movingObject.position, destPos) <= 0.65f)
			{
				ResetLineRenderer();
			}
		}
	}

	void CalculateMidPoint()
	{
		Vector3 midPos = Vector3.zero;

		renderingLine.SetPosition(1, movingObject.position);
	}

	void ResetLineRenderer()
	{
		for (int i = 0; i < renderingLine.positionCount; i++)
		{
			renderingLine.SetPosition(i, renderingLine.GetPosition(0));
		}
		destPosActive = false;
	}

	void OnEscapePresed()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(0);
	}

}
