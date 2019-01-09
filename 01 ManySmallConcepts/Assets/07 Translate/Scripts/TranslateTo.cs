using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TranslateTo : MonoBehaviour
{
	public static TranslateTo referencingSphere;
	private void Start()
	{
		referencingSphere = this;
	}

	/// <summary>
	/// used to translate the object to which 'TranslateTo' is attached
	/// </summary>
	/// <param name="xVal">translate X coordinate by</param>
	/// <param name="yVal">translate Y coordinate by</param>
	/// <param name="zVal">translate Z coordinate by</param>
	public void TranslateBy(float xVal, float yVal, float zVal)
	{
		referencingSphere.transform.Translate(new Vector3(xVal, yVal, zVal));
	}
	
}
