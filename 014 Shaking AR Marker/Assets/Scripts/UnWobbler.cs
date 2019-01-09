/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//#Details
//	Attach this to a parent Object, preferably an ImageTarget in AR
//	the prefab is created at defLocalPos with defLocalRot at starting.
//#Position
//	if the parent moves a deadPosRange, the child will stay unaltered at same place.
//	if the parent moves more that deadPosRange, the child will be transferred to a new defLocalPos
//#Rotation


public class UnWobbler : MonoBehaviour 
{
	public static UnWobbler myRef;
	public GameObject prefabObj;
	public Transform imageTarget, emptyChild;
	
	public float deadPosRange = 1, deadRotRange = 1;

	Vector3 globalPos2Set;
	Quaternion globalRot2Set;
	GameObject currentObj;
	GameObject prevPrefab;
	public Text uiText;

	//for testing
	public bool trackingStarted, trackingLost;
	bool trackingInProgress;

	private void Awake()
	{
		myRef = this;
	}

	private void Start()
	{
		globalRot2Set = Quaternion.identity;
		globalPos2Set = Vector3.zero;
	}

	void TrackingStarted()
	{
		//destroy old disabled model as new model's image was scanned
		if (prevPrefab != prefabObj)
		{
			Destroy(currentObj);
			currentObj = Instantiate(prefabObj, emptyChild.localPosition,
				emptyChild.localRotation, imageTarget);
		}

		//create new instance of prefab if we do not already have it
		if (currentObj == null)
		{
			currentObj = Instantiate(prefabObj, emptyChild.localPosition, 
				emptyChild.localRotation, imageTarget);
		}
		//found errors so redoing it
		currentObj.transform.parent = imageTarget;

		//in case it is disabled
		currentObj.SetActive(true);

		//converting local position and rotation to global
		SetUpData();
		currentObj.transform.localScale = emptyChild.localScale;
		RetransformPrefab();

	}

	void BeingTracked()
	{
		if (currentObj != null)
		{
			if (Vector3.Distance(currentObj.transform.position,
				emptyChild.transform.position) >= deadPosRange
				||
				Quaternion.Angle(emptyChild.transform.localRotation,
				currentObj.transform.localRotation) >= deadRotRange)
			{
				SetUpData();
			}

			RetransformPrefab();
		}
	}

	void Update () 
	{
		//tracking Started
		if(trackingStarted)
		{
			TrackingStarted();
			trackingStarted = false;
			trackingInProgress = true;
		}

		//tracking Lost, may be tracked again soon
		if(trackingLost)
		{
			Invoke("TrackingLost", 0.1f);
			trackingLost = false;
			trackingInProgress = false;
		}

		//tracking currently
		if(trackingInProgress)
		{
			BeingTracked();
		}

		//tracker for Prefab changed
		if (prefabObj != null)
		{
			prevPrefab = prefabObj;
		}

		if(uiText != null)
		{
			uiText.text = "child global Rotation: " + globalRot2Set.eulerAngles.x
				+ ", " + globalRot2Set.eulerAngles.y
				+ ", " + globalRot2Set.eulerAngles.z;
		}
	}

	void TrackingLost()
	{
		if(currentObj != null)
			currentObj.SetActive(false);
	}

	void SetUpData()
	{
		globalPos2Set = emptyChild.transform.position;
		globalRot2Set = emptyChild.transform.rotation;
	}

	void RetransformPrefab()
	{
		currentObj.transform.position = globalPos2Set;
		currentObj.transform.rotation = globalRot2Set;
	}
}
