using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateFallingBomb : MonoBehaviour
{
	[Tooltip("X range of instantiating Position, instantiation takes place randomely")]
	public float xValMin, xValMax;

	[SerializeField]
	[Tooltip("Constant values")]
	private float yVal, zVal;

	[SerializeField]
	GameObject[] references;
	int index;

	private void Start()
	{
		index = 0;
		InvokeRepeating("CreateInstance", 1, 6);
		if(yVal == 0 && zVal ==0)
		{
			CancelInvoke();
		}
	}

	void CreateInstance()
	{
		references[index % references.Length].transform.position = new Vector3(Random.Range(xValMin, xValMax), yVal, zVal);
		references[index % references.Length].transform.rotation = Quaternion.identity;
		references[index % references.Length].SetActive(true);
		index++;
	}
}
