using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableAfter : MonoBehaviour
{
	public float Lifetime = 5f;
	private void Start()
	{
		Invoke("DisableMe", Lifetime);
	}

	void DisableMe()
	{
		gameObject.SetActive(false);
	}
}
