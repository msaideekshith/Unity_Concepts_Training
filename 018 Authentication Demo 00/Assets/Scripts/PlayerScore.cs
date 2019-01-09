/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/14/2018 12:33:02 PM
*/
using UnityEngine;
using UnityEngine.UI;

public class PlayerScore : MonoBehaviour
{
	public Transform player;
	public Text scoreText;

	private float initialZ;
	void Start ()
	{
		FindObjectOfType<PlayerMovements>().gameObject.GetComponent<Renderer>().material.color = new Color(1f, 0f, 0f, 1);
		initialZ = player.position.z;
	}

	void Update ()
	{
		scoreText.text = (player.position.z - initialZ).ToString("0");
	}
}
