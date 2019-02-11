using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SerialKeyNavigation : MonoBehaviour
{
	//Reference to all InputField in order
	public InputField[] serialNumber;
	public Button _submitBtn;
	public string validateString;
	public Text indexVal;

	int _boxIndex=0;
	bool _lengthValidator;
	string _finalInput;
	

	private void OnEnable()
	{
		serialNumber[_boxIndex].Select();
		//serialNumber[_boxIndex].caretPosition = 0;

	}

	private void Update()
	{

		//select next textField when max number of characters are entered
		if(serialNumber[_boxIndex].text.Length == serialNumber[_boxIndex].characterLimit 
			&&	 _boxIndex != serialNumber.Length-1)
		{
			_boxIndex++;
			serialNumber[_boxIndex].Select();
			//serialNumber[_boxIndex].caretPosition = serialNumber[_boxIndex].text.Length;
			
		}

		//select previous textField, except when first one is selected, 
		//when backspace is clicked and there is no text in current field
		if(serialNumber[_boxIndex].text.Length == 0
			&&	Input.GetKeyDown(KeyCode.Backspace))
		{
			if(_boxIndex != 0)
			{
				_boxIndex--;
			}
			serialNumber[_boxIndex].Select();
			serialNumber[_boxIndex].text = CutString(serialNumber[_boxIndex].text, 1);
			//serialNumber[_boxIndex].caretPosition = serialNumber[_boxIndex].text.Length;
		}

		//decide to enable or disable submit Button
		_lengthValidator = true;
		foreach(InputField i in serialNumber)
		{
			if (i.text.Length != 4)
				_lengthValidator = false;
		}
		_submitBtn.interactable = _lengthValidator;
		
		if(_lengthValidator && Input.GetKey(KeyCode.Return))
		{
			//Nullify Input Tester
			_finalInput = "";
			//create all input as single string
			foreach(InputField i in serialNumber)
			{
				_finalInput += i.text;
			}

			if(_finalInput == validateString)
			{
				Debug.Log("Congrats, You have a valid Key");
			}
			else
			{
				Debug.LogError("Dude, Stop Trying to guess and go purchase");
			}
		}

		//just to debug
		indexVal.text = _boxIndex.ToString();
	}

	/// <summary>
	/// trim string from Right by cutLength
	/// </summary>
	/// <param name="input">the string to cut</param>
	/// <param name="cutLength">the extra length to cut</param>
	/// <returns></returns>
	public static string CutString(string input, int cutLength)
	{
		if (cutLength >= input.Length)
		{
			return input;
		}
		else
		{
			return input.Substring(0, input.Length - cutLength);
		}
	}



}
