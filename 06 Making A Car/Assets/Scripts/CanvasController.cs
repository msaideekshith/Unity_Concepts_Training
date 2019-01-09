using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


[RequireComponent(typeof(CarController01))]
public class CanvasController : MonoBehaviour
{
	//pubic gear text variable
	public Text gearTextUI;

	//variable to store current gear as per CarController01
	CarGear currGear;


	private void Start()
	{

	}

	private void Update()
	{
		currGear = GetComponent<CarController01>().gear;
		GearUpdate();

	}
	void GearUpdate()
	{
		switch (currGear)
		{
			case CarGear.Reverse:
				gearTextUI.text = "R";
				break;
			case CarGear.Neutral:
				gearTextUI.text = "N";
				break;
			case CarGear.first:
				gearTextUI.text = "1";
				break;
			case CarGear.second:
				gearTextUI.text = "2";
				break;
			case CarGear.third:
				gearTextUI.text = "3";
				break;
			case CarGear.fourth:
				gearTextUI.text = "4";
				break;
			case CarGear.fifth:
				gearTextUI.text = "5";
				break;
			default:
				gearTextUI.text = "E";
				Debug.LogWarning("default case of GearUpdate() reached");
				break;
		}
	}

}
