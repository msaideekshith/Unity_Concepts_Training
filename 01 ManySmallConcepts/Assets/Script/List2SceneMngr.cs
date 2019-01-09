using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class List2SceneMngr : MonoBehaviour
{
	private void Update()
	{
		if(Input.GetKey(KeyCode.Escape))
		{
			UnityEngine.SceneManagement.SceneManager.LoadScene(0);
		}
	}

	public void LoadDestroyScene()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(1);
	}

	public void LoadDisableScene()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(2);
	}

	public void LoadDisComp()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(3);
	}

	public void LoadDisObj()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(4);
	}

	public void LoadBtnStates()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(5);
	}

	public void LoadInpMngr()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(6);
	}

	public void LoadTranslateExample()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(7);
	}

	public void LoadPositionExample()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(8);
	}
	
	public void LoadMathfLerp()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(9);
	}

	public void LoadGetKeyStates()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(10);
	}

	public void LoadQuaternions()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene(11);
	}

	public void NotDefined()
	{
		Debug.LogError("Not Yet Defined, take a check");
	}
}
