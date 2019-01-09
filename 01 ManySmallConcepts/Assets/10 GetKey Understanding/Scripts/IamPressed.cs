using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IamPressed : MonoBehaviour {

	//enum conditionStates {buttonPressed, buttonUp, buttonDown };
	[SerializeField]
	bool buttonPressed, buttonUp, buttonDown;

	Color tempCol;

	private void Start()
	{
		
	}

	private void Update()
	{
		if(buttonPressed && Input.GetKey(KeyCode.Space))
		{
			GetComponent<RectTransform>().localScale = new Vector3(1, 1.5f, 1);
		}
		else if(buttonPressed)
		{
			GetComponent<RectTransform>().localScale = Vector3.one;
		}

		if (buttonUp && Input.GetKeyUp(KeyCode.Space))
		{
			GetComponent<RectTransform>().localScale = new Vector3(1, 1.5f, 1);
		}
		else if (buttonUp)
		{
			GetComponent<RectTransform>().localScale = Vector3.one;
		}

		if (buttonDown && Input.GetKeyDown(KeyCode.Space))
		{
			GetComponent<RectTransform>().localScale = new Vector3(1, 1.5f, 1);
		}
		else if (buttonDown)
		{
			GetComponent<RectTransform>().localScale = Vector3.one;
		}
	}
}
