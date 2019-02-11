using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum State { idle, walk, run, wave};

public class AdamMovementController : MonoBehaviour
{
	//bool to determine postion o walk to
	public bool targetSet = false;

	public GameObject walkingModel;

	public Vector3 targetPosition;
	public Animation Animation1;
	//the output variable for each hit
	public RaycastHit hitInfo;

	public float currSpeed;
	private float preSpeed;
	[SerializeField]
	private State curState = State.idle;

	private void Update()
	{
		
		preSpeed = currSpeed;
		currSpeed = walkingModel.GetComponent<Rigidbody>().velocity.magnitude * 1000000000000;

		if (Input.GetMouseButtonDown(0))
		{
			Ray raycreated = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Physics.Raycast(raycreated, out hitInfo))
			{
				if (hitInfo.collider.tag == "Map")
				{
					targetSet = true;
					targetPosition = hitInfo.point;
					walkingModel.GetComponent<Animator>().Play("idle", 0);
					preSpeed = 0;
				}
			}
		}

		if (targetSet)
		{
			walkingModel.transform.position = Vector3.Lerp(walkingModel.transform.position,
				new Vector3(targetPosition.x, walkingModel.transform.position.y, targetPosition.z),
				Time.deltaTime * 10);


			walkingModel.transform.LookAt(targetPosition);

			
			if (preSpeed == 0)
			{
				//walkingModel.GetComponent<Animator>().speed = 1;
				//based on currspeed determine if we are walking
				if (currSpeed > 3)
				{
					walkingModel.GetComponent<Animator>().SetTrigger("RunAnimation");
					curState = State.run;
				}
				else
				{
					walkingModel.GetComponent<Animator>().SetTrigger("JustWalk");
					curState = State.walk;
				}
			}
			if (curState == State.run && currSpeed < 3 && currSpeed > 0)
			{
				walkingModel.GetComponent<Animator>().SetTrigger("WalkAnimation");
				curState = State.walk;
			}
			if (Vector3.Distance(walkingModel.transform.position, targetPosition) <= 1)
			{
				targetSet = false;
				walkingModel.GetComponent<Animator>().SetTrigger("WaveAnimation");
				curState = State.idle;
			}
		}
	}

}
