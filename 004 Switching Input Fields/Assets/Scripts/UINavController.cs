using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UINavController : MonoBehaviour
{
	public InputField[] AllFileldsInOrder;
	int _selectionIndex;

	void Start ()
	{
		AllFileldsInOrder[0].Select();
		_selectionIndex = 0;
	}

	void Update ()
	{
		if(Input.GetKeyDown(KeyCode.Tab) && Input.GetKey(KeyCode.LeftShift))
		{ 
			if(_selectionIndex > 0)
				_selectionIndex--;
			AllFileldsInOrder[_selectionIndex].Select();
		}

		if (Input.GetKeyDown(KeyCode.Tab))
		{
			if (_selectionIndex < AllFileldsInOrder.Length - 1)
			{
				_selectionIndex++;
			}
			else
			{
				_selectionIndex = 0;
			}
			AllFileldsInOrder[_selectionIndex].Select();
		}

		if (Input.GetKeyDown(KeyCode.Return))
		{
			print("Details are as follows:");
			for (_selectionIndex = 0;  _selectionIndex < AllFileldsInOrder.Length; _selectionIndex++)
			{
				if (AllFileldsInOrder[_selectionIndex].text.Length > 0)
				{
					print("val" + _selectionIndex + " : " + AllFileldsInOrder[_selectionIndex].text);
					AllFileldsInOrder[_selectionIndex].text = "";
				}
				else
				{
					Debug.LogError("Form is incomplete. Fill all boxes before hitting Enter");
				}
			}
			_selectionIndex = 0;
			AllFileldsInOrder[_selectionIndex].Select();
		}
	}
}
