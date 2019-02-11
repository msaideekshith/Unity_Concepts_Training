using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NextPrevScript : MonoBehaviour
{
	//variables holding GameObject Reference
	public GameObject prevGob, nextGob, currGob;

	public void NextObject()
	{
		if (nextGob != null)
		{
			nextGob.SetActive(true);
			currGob.SetActive(false);
		}
	}

	public void PrevObject()
	{
		if (prevGob != null)
		{
			prevGob.SetActive(true);
			currGob.SetActive(false);
		}
		
	}

}
