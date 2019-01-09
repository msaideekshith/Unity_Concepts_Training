/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnWobblerManager : MonoBehaviour 
{
	public UnWobbler unwobblerRef;
	public List<GameObject> parentObj;
	public List<GameObject> childObj;
	public List<GameObject> prefabObj;
	public static UnWobblerManager myRef;

	private void OnEnable()
	{
		myRef = this;
		if(unwobblerRef == null)
		{
			unwobblerRef = UnWobbler.myRef;
		}
	}

	void Start () 
	{
		for (int i = 0; i < parentObj.Count; i++)
		{
			childObj.Add(parentObj[i].transform.GetChild(0).gameObject);
		}
	}
	
	void Update () 
	{
		if(parentObj.Count != childObj.Count || childObj.Count != prefabObj.Count)
		{
			Debug.LogError("The 3 lists don't match in count");
			Application.Quit();
		}
	}

	public void TargetFound(GameObject callingObject)
	{
		int refIndex = 0;
		for(int i = 0; i< parentObj.Count; i++)
		{
			if(parentObj[i] == callingObject && refIndex == 0)
			{
				refIndex = i;
			}
			else if (refIndex != 0 && parentObj[i] == callingObject)
			{
				Debug.LogError("two or more Objects are matched.");
			}
		}
		unwobblerRef.imageTarget = parentObj[refIndex].transform;
		unwobblerRef.emptyChild = childObj[refIndex].transform;
		unwobblerRef.prefabObj = prefabObj[refIndex];

		unwobblerRef.trackingStarted = true;
	}

	public void TargetLost()
	{
		unwobblerRef.trackingLost = true;
	}
}
