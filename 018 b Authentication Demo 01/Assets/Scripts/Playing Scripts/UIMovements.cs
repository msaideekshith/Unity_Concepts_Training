/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/21/2018 2:26:13 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIMovements : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
	PlayerMovements playerObj;
	bool isPressed;
	private void Awake()
	{
		playerObj = FindObjectOfType<PlayerMovements>();

	}

	private void Update()
	{
		if (name == "RightPanel")
		{
			playerObj.moveRight = isPressed;
		}
		else
		{
			playerObj.moveLeft = isPressed;
		}
	}

	public void OnPointerDown(PointerEventData eventData)
	{
		isPressed = true;
	}

	public void OnPointerUp(PointerEventData eventData)
	{
		isPressed = false;
	}
}
