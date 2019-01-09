using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleValChanged : MonoBehaviour
{
	Toggle refToggle;
	public Renderer cubeRenderer;
	private void Awake()
	{
		refToggle = GetComponent<Toggle>();
	}

	private void OnEnable()
	{
		Debug.Log("Toggle Handler Enabled");
	}

	public void SamChanged()
	{
		if(refToggle.isOn)
		{
			Debug.Log("cube visible");
			cubeRenderer.enabled = true;
		}
		else
		{
			Debug.Log("cube invisible");
			cubeRenderer.enabled = false;
		}
	}

	private void OnDisable()
	{
		
	}
}
