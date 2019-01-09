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
	public static PlayerScore Instance;
	public Transform player;
	public Text scoreText;

	private float initialZ;
	[HideInInspector]
	public int score;
	public int lastScore=0;
	void Start ()
	{
		Instance = this;
		lastScore = PlayerPrefs.GetInt("Score", 0);
		FindObjectOfType<PlayerMovements>().gameObject.GetComponent<Renderer>().material.color = new Color(1f, 0f, 0f, 1);
		initialZ = player.position.z;
	}

	void Update ()
	{
		score = lastScore + (int)(player.position.z - initialZ);
		scoreText.text = score.ToString("0");
	}
}
