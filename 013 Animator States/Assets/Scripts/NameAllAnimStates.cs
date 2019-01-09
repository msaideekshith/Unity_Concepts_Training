/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.Animations;

public class NameAllAnimStates : MonoBehaviour 
{
	public List<string> AnimStateNames;
	AnimatorControllerLayer[] acLayers;
	ChildAnimatorState[] ch_animStates;

	Animator animator;
	AnimatorController ac;
	AnimatorStateMachine stateMachine;
	int k = 0;

	AnimatorControllerLayer curAnimLayer;
	int curLayerIndex = 0, curAnimStateIndex=0;
	ChildAnimatorState[] curAnimLayerState;
	ChildAnimatorState curAnimState;

#if UNITY_EDITOR



	private void Reset()
	{
		animator = GetComponent<Animator>();
		ac = animator.runtimeAnimatorController as AnimatorController;

		Debug.Log(string.Format("Layer Count: {0}", animator.layerCount));

		for (int i = 0; i< animator.layerCount; i++)
		{
			Debug.Log(string.Format("Layer {0}: {1}", i, animator.GetLayerName(i)));
			Debug.Log("---");
		}
		acLayers = ac.layers;

		foreach(AnimatorControllerLayer i in acLayers) //for each layer
		{
			Debug.Log("******");
			Debug.Log("Layer : "+i.name);
			Debug.Log("---");
			stateMachine = i.stateMachine;
			ch_animStates = null;
			ch_animStates = stateMachine.states;
			foreach (ChildAnimatorState j in ch_animStates) //for each state
			{
				AnimStateNames.Add(j.state.name);
				k++;
				Debug.Log("Added " + i.name + "." + j.state.name);
			}
		}
		Debug.Log("All " + k + " states in " + animator.layerCount 
						+ " layers were added to the string array");

		
	}

	#endif //end of Reset Function


	void Start () 
	{
		if (acLayers != null)
		{
			curLayerIndex = 0;
			curAnimLayer = acLayers[curLayerIndex];
			curAnimStateIndex = 0;
		}
		else
		{
			Destroy(this);
		}
	}
	
	void Update () 
	{
		if(curAnimLayer != acLayers[curLayerIndex])
		{
			curAnimLayer = acLayers[curLayerIndex];
			curAnimStateIndex = 0;
			curAnimLayerState = curAnimLayer.stateMachine.states;
			curAnimStateIndex = 0;
			curAnimState = curAnimLayerState[curAnimStateIndex];
		}

		/*
		if(curAnimState.GetHashCode != curAnimLayerState[curAnimStateIndex].GetHashCode)
		{

		}
		*/
	}

	public void ChangeLayers()
	{
		animator.Play("", curLayerIndex);
	}
}
