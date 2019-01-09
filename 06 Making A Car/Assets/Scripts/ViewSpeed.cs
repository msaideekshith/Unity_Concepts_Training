using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(Rigidbody))]
public class ViewSpeed : MonoBehaviour
{
	public float Speed;
	private Rigidbody rb;
	// Use this for initialization
	void Start ()
	{
		rb = transform.GetComponent<Rigidbody>();
		
		Speed = rb.velocity.magnitude;
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		Speed = rb.velocity.magnitude;
	}
}
