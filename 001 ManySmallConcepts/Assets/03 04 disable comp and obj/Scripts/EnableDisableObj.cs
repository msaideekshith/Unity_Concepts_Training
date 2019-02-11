using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableDisableObj : MonoBehaviour {

	public GameObject targetObj;

	public void EnableObj()
	{
		targetObj.SetActive(true);
	}

	public void DisableObj()
	{
		targetObj.SetActive(false);
	}

}
