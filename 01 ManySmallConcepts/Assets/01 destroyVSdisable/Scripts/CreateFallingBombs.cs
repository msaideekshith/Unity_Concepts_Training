using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateFallingBombs : MonoBehaviour
{
	[Tooltip("X range of instantiating Position, instantiation takes place randomely")]
	public float xValMin, xValMax;

	[SerializeField]
	[Tooltip("Constant values")]
	private float yVal, zVal;
	[SerializeField]
	[Tooltip("Reference of object to inswtantiate")]
	private GameObject objectToInstantiate;

	private void Start()
	{
		InvokeRepeating("CreateInstance", 1, 4);
		if(yVal == 0 && zVal ==0)
		{
			CancelInvoke();
		}
	}

	void CreateInstance()
	{
		Instantiate(objectToInstantiate, new Vector3(Random.Range(xValMin, xValMax), yVal, zVal), Quaternion.identity);
	}
}
