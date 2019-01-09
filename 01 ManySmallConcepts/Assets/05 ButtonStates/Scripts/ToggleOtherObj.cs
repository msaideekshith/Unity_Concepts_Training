using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleOtherObj : MonoBehaviour {

	public GameObject OtherBtn;
	public void EnableOtherComponent()
	{

		if (OtherBtn.GetComponent<Button>() == null)
			Debug.LogError("OtherObj in ToggleOtherObj should have a btn component");
		else
			OtherBtn.GetComponent<Button>().enabled = true;
		GetComponent<Button>().enabled = false;
	}
}
