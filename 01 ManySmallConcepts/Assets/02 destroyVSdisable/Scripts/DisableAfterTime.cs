using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableAfterTime : MonoBehaviour
{
	public float SurvivingTime = 10;

	private void OnEnable()
	{
		Invoke("DisableAfter", SurvivingTime);
	}

	void DisableAfter()
	{
		gameObject.SetActive(false);
	}
	private void OnDisable()
	{
		CancelInvoke();
	}
}
