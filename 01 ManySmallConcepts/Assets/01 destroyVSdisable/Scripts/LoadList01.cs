﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadList01 : MonoBehaviour
{

	void Update()
	{
		if(Input.GetKey(KeyCode.Escape))
		SceneManager.LoadScene(0);
	}
}
