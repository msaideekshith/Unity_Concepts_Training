/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/14/2018 12:55:28 PM
*/
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
	public float restartDelay = 3f;
	public float endAlert = 0.5f;
	public Button StartButton;
	public Text scoreCurrent;
	public Text highScore;

	private void Awake()
	{
		StartButton.interactable = true;
		StartButton.transform.GetChild(0).GetComponent<Text>().text = "Start";
		FindObjectOfType<PlayerMovements>().enabled = false;
		highScore.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
	}

	public void EndGame()
	{
		FindObjectOfType<PlayerScore>().enabled = false;
		Debug.Log("Game Ended");
		Invoke("Restart", restartDelay);
		Invoke("GiveNews", endAlert);
		UpdateScore();
	}

	public void NextLevel()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
	}

	public void Restart()
	{
		SceneManager.LoadScene(1);
	}

	private void GiveNews()
	{
		StartButton.gameObject.SetActive(true);
		StartButton.interactable = false;
		StartButton.transform.GetChild(0).GetComponent<Text>().text = "Game Over";
		PlayerPrefs.SetInt("Score", 0);
	}

	public void StartPressed()
	{
		FindObjectOfType<PlayerMovements>().enabled = true;
		StartButton.gameObject.SetActive(false);
	}

	public void UpdateScore()
	{
		FindObjectOfType<PlayerScore>().enabled = false;
		scoreCurrent = FindObjectOfType<PlayerScore>().scoreText;
		if (int.Parse(scoreCurrent.text) > PlayerPrefs.GetInt("HighScore", 0))
		{
			PlayerPrefs.SetInt("HighScore", int.Parse(scoreCurrent.text));
		}
		highScore.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
	}
}
