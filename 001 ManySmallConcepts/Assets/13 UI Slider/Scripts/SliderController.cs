using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour
{
	public GameObject cube2Reposition;

	private float yVal, zVal;

	private void Start()
	{
		yVal = cube2Reposition.transform.position.y;
		zVal = cube2Reposition.transform.position.z;
	}

	public void OnSliderValChanged()
	{
		cube2Reposition.transform.position = new Vector3(GetComponent<Slider>().value, yVal, zVal);
	}
}
