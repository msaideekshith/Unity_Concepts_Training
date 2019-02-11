using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasManager : MonoBehaviour
{

	public Text currX, currY, currZ;
	public InputField transX, transY, transZ;
	
	public void OnTranslateClicked()
	{
		if (transX.text == "")
			transX.text = "0";
		if (transY.text == "")
			transY.text = "0";
		if (transZ.text == "")
			transZ.text = "0";

		TranslateTo.referencingSphere.TranslateBy(
			float.Parse(transX.text),
			float.Parse(transY.text),
			float.Parse(transZ.text)	);


			transX.text = "0";
			transY.text = "0";
			transZ.text = "0";
	}

	private void Update()
	{
		currX.text = TranslateTo.referencingSphere.transform.position.x.ToString();
		currY.text = TranslateTo.referencingSphere.transform.position.y.ToString();
		currZ.text = TranslateTo.referencingSphere.transform.position.z.ToString();
	}

	public void ResetPressed()
	{
		TranslateTo.referencingSphere.transform.position = new Vector3(0, 0.5f, 0);
	}
}
