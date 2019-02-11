/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoroutineReturnType : MonoBehaviour 
{
	public bool waitUntil, waitwhile;
	
	void Start () 
	{
		StartCoroutine(SampleRoutine());
	}
	
	void Update () 
	{
		
	}

	IEnumerator SampleRoutine()
	{
		Debug.Log("Hi there, this is the start");

		yield return null;
		Debug.Log("Random test 1, skipped one frame");

		yield return new WaitForEndOfFrame();
		Debug.Log("Random test 2, rendered at end of frame");

		yield return new WaitForFixedUpdate();
		Debug.Log("Random test 3, rendered after fixed update frame");

		yield return new WaitForSeconds(0.1f);
		Debug.Log("Random test 4, rendered after 0.1f seconds as per timeScale");

		yield return new WaitForSecondsRealtime(0.1f);
		Debug.Log("Random test 5, rendered after 0.1f seconds as per RealTime");

		yield return new WaitUntil(GetWaitUntil);
		Debug.Log("Random test 6, Rendered because WaitUntil turned true");

		yield return new WaitWhile(GetWaitWhile);
		Debug.Log("Random test 7, Rendered because WaitWhile turned false");

	}

	bool GetWaitUntil()
	{
		return waitUntil;
	}

	bool GetWaitWhile()
	{
		return waitwhile;
	}
}
