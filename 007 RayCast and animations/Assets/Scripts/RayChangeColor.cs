using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayChangeColor : MonoBehaviour
{
	//the object to move when a position in map is clicked on
	public GameObject playerParent;
	//the output variable for each hit
	RaycastHit hitInfo;
	//do we need to move the player
	bool playerMoving = false;
	//the target position to move the player to
	Vector3 targetPos;
	//the speed of moving player
	public float speed;

	private void Update()
	{
		//if(Input.GetMouseButtonDown(0))
		//{
			Ray raycreated = Camera.main.ScreenPointToRay(Input.mousePosition);
			if(Physics.Raycast(raycreated, out hitInfo))
			{
				if(hitInfo.collider.tag == "changeColor")
				{
					hitInfo.collider.gameObject.GetComponent<Renderer>().material.color 
								= new Color(Random.value, Random.value, Random.value);
				}
				else if(hitInfo.collider.tag == "RotateRandom")
				{
					hitInfo.collider.transform.Rotate(Random.Range(5, 15), Random.Range(5, 15), Random.Range(5, 15));
				}
				else if(hitInfo.collider.tag == "Map")
				{
					playerMoving = true;
					targetPos = hitInfo.point;
				}
				else
				{
					Debug.Log("neither of two objects selected");
				}
			}
		//}


		if (playerMoving)
		{
			playerParent.transform.position = Vector3.Lerp(playerParent.transform.position, targetPos, Time.deltaTime * speed);
			if (playerParent.transform.position == targetPos)
			{
				playerMoving = false;
			}
		}
	}
}
