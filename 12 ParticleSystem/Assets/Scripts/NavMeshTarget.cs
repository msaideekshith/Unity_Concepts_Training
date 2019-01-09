/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavMeshTarget : MonoBehaviour 
{

	public Transform NAvTarget;

	NavMeshAgent navMeshAgent;

	void Start () 
	{
		navMeshAgent = transform.GetComponent<NavMeshAgent>();

		InvokeRepeating("UpdateTarget", .5f, .5f);
	}
	
	void UpdateTarget () 
	{
		navMeshAgent.SetDestination(NAvTarget.position);
	}
}
