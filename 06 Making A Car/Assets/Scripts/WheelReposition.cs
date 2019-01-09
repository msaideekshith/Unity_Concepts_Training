using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheelReposition : MonoBehaviour
{
	//actual colliders
	public WheelCollider Front_Right, Front_Left, Rear_Right, Rear_Left;
	//to view
	public Transform front_right, front_Left, rear_Right, rear_Left;

	public float yDiffrential;
	public float currSteerAngle;
	public float xTurnMultiplier = 60;

	float FR_xSteer, FL_xSteer, RR_xSteer, RL_xSteer;
	float FR_ySteer, FL_ySteer, RR_ySteer, RL_ySteer;

	private void Start()
	{
		Debug.Log("WheelReposition ensures wheels are in same place as wheel colliders");
	}

	private void FixedUpdate()
	{
		//we found that wheel view needs to be 0.28 below the collider to match position
		front_right.position = Front_Right.transform.position;
		front_Left.position = Front_Left.transform.position;
		rear_Right.position = Rear_Right.transform.position;
		rear_Left.position = Rear_Left.transform.position;

		front_right.localPosition = new Vector3(front_right.localPosition.x, front_right.localPosition.y - 0.2f, front_right.localPosition.z);
		front_Left.localPosition = new Vector3(front_Left.localPosition.x, front_Left.localPosition.y - 0.2f, front_Left.localPosition.z);
		rear_Right.localPosition = new Vector3(rear_Right.localPosition.x, rear_Right.localPosition.y - 0.2f, rear_Right.localPosition.z);
		rear_Left.localPosition = new Vector3(rear_Left.localPosition.x, rear_Left.localPosition.y - 0.2f, rear_Left.localPosition.z);


	}

	private void Update()
	{
		//front_right.Rotate(Front_Right.rpm / 60 * 360 * Time.deltaTime, 0, 0);
		//front_Left.Rotate(Front_Left.rpm / 60 * 360 * Time.deltaTime, 0, 0);
		//rear_Right.Rotate(Rear_Right.rpm / 60 * 360 * Time.deltaTime, 0, 0);
		//rear_Left.Rotate(Rear_Left.rpm / 60 * 360 * Time.deltaTime, 0, 0);

		//calculate X steer, basically wheel rolling when car moves based on RPM
		FR_xSteer = front_right.transform.rotation.eulerAngles.x + (Front_Right.rpm * xTurnMultiplier * Time.deltaTime);
		FL_xSteer = front_Left.transform.rotation.eulerAngles.x  + (Front_Left.rpm  * xTurnMultiplier * Time.deltaTime);
		RR_xSteer = rear_Right.transform.rotation.eulerAngles.x  + (Rear_Right.rpm  * xTurnMultiplier * Time.deltaTime);
		RL_xSteer = rear_Left.transform.rotation.eulerAngles.x   + (Rear_Left.rpm   * xTurnMultiplier * Time.deltaTime);
		//what is the steer angle of the wheels as per the script attached to the car
		currSteerAngle = transform.root.GetComponent<CarController01>().currSteer;
		FR_ySteer = currSteerAngle + transform.root.transform.rotation.eulerAngles.y;
		FL_ySteer = currSteerAngle + transform.root.transform.rotation.eulerAngles.y;
		//back wheels generally do not turn while turning
		RR_ySteer = transform.root.transform.rotation.eulerAngles.y + (currSteerAngle / 3f);
		RL_ySteer = transform.root.transform.rotation.eulerAngles.y + (currSteerAngle / 3f);

		//apply the calculated rotation to the wheels to view
		front_right.transform.rotation = Quaternion.Euler(FR_xSteer, FR_ySteer, 0);
		front_Left.transform.rotation = Quaternion.Euler(FL_xSteer, FL_ySteer, 0);
		rear_Right.transform.rotation = Quaternion.Euler(RR_xSteer, RR_ySteer, 0);
		rear_Left.transform.rotation = Quaternion.Euler(RL_xSteer, RL_ySteer, 0);
	}

}
