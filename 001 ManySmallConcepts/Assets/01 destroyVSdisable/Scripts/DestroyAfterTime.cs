﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAfterTime : MonoBehaviour
{
	public float SurvivingTime = 10;
	private void Start()
	{
		Destroy(gameObject, SurvivingTime);
	}
}
