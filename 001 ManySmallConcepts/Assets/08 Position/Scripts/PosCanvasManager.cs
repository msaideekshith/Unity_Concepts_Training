using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PosCanvasManager : MonoBehaviour
{


	public Text currX, currY, currZ;
	public InputField newPosX, newPosY, newPosZ;

	public GameObject TargetObj;

	public void OnNewPosClicked()
	{
		if (newPosX.text == "")
			newPosX.text = "0";
		if (newPosY.text == "")
			newPosY.text = "0";
		if (newPosZ.text == "")
			newPosZ.text = "0";

		TargetObj.transform.position = new Vector3(
													float.Parse(newPosX.text),
													float.Parse(newPosY.text),
													float.Parse(newPosZ.text));

		newPosX.text = "0";
		newPosY.text = "0";
		newPosZ.text = "0";
	}

	private void Update()
	{
		currX.text = TargetObj.transform.position.x.ToString();
		currY.text = TargetObj.transform.position.y.ToString();
		currZ.text = TargetObj.transform.position.z.ToString();
	}

	public void ResetPressed()
	{
		TargetObj.transform.position = new Vector3(0, 0.5f, 0);
	}
}
