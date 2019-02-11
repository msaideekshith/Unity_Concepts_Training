using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LerpCodeCanvas : MonoBehaviour
{
	public Slider sliderRef;
	public Text currVal, SliderVal;

	public InputField staPosX, endPosX;

	public void OnSliderValChanged()
	{
		if (staPosX.text == "")
			staPosX.text = "0";
		if (endPosX.text == "")
			endPosX.text = "0";

		SliderVal.text = sliderRef.value.ToString();
		
		currVal.text = Mathf.Lerp(
								float.Parse(staPosX.text), 
								float.Parse(endPosX.text), 
								sliderRef.value).ToString();

	}

	public void ResetClicked()
	{
		staPosX.text = "0";
		endPosX.text = "0";
		sliderRef.value = 0;
	}

}
