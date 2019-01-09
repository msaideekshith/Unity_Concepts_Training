/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/15/2018 1:40:13 PM
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveright : MonoBehaviour
{



	void Update ()
	{
		transform.position += new Vector3(0.01f, 0, 0);
	}
}
