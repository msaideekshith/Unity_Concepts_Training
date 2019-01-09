using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnCollissionDestroy : MonoBehaviour
{

	private void OnCollisionEnter(Collision collision)
	{
		if(collision.gameObject.tag == "Player")
		{
			//Instantiate(destructionAnimation, transform.position, Quaternion.identity);
			Destroy(gameObject);
		}
	}

	private void OnCollisionStay(Collision collision)
	{
		if(collision.gameObject.tag == "Player")
		{
			//Instantiate(destructionAnimation, transform.position, Quaternion.identity);
			Destroy(gameObject);
		}
	}
}
