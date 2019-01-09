using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableDisableComponents : MonoBehaviour
{
	public GameObject gobRef;

	public void EnableVerticalOscillation()
	{
		gobRef.GetComponent<OscillateUpDown>().enabled = true;
	}

	public void DisableVerticalOscillation() 
	{
		gobRef.GetComponent<OscillateUpDown>().enabled = false;
	}

	public void EnableHorizOscillation()
	{
		gobRef.GetComponent<OscillateLeftRight>().enabled = true;
	}

	public void DisableHorizOscillation()
	{
		gobRef.GetComponent<OscillateLeftRight>().enabled = false;
	}

	public void NotDefined()
	{
		Debug.LogError("Not Yet Defined, take a check");
	}
}
