using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/

public class SwipeControls : MonoBehaviour
{
    public GameObject maincamera;
    public GameObject controlledObject;


    public Vector2 startPos;
    public Vector2 direction;
    public float fingerDistance, fingerDistancePrev, zoomBy;

    void Update()
    {
        if (Input.touchCount > 0 && Input.touchCount < 3)
        {
            direction = Vector2.zero;
            if (Input.touchCount == 1)
            {
                Touch touch = Input.GetTouch(0);

                // Handle finger movements based on TouchPhase
                switch (touch.phase)
                {
                    //When a touch has first been detected, change the message and record the starting position
                    case TouchPhase.Began:
                        // Record initial touch position.
                        startPos = touch.position;
                        break;

                    //Determine if the touch is a moving touch
                    case TouchPhase.Moved:
                        // Determine direction by comparing the current touch position with the initial one
                        direction = touch.position - startPos;
                        //Debug.Log(direction);
                        break;

                    case TouchPhase.Ended:
                        break;
                }
                if (direction.x != 0)
                {
                    controlledObject.transform.Rotate(0, -direction.x , 0);
                    startPos = touch.position;
                }

                
            }
            else //means touch is 2 finger touch
            {
                fingerDistance = Vector2.Distance(Input.GetTouch(0).position, Input.GetTouch(1).position);
                
                if (Input.GetTouch(1).phase == TouchPhase.Moved || Input.GetTouch(0).phase == TouchPhase.Moved)
                {
                    zoomBy = fingerDistance - fingerDistancePrev;
                }
                if(Input.GetTouch(1).phase == TouchPhase.Ended || Input.GetTouch(0).phase == TouchPhase.Ended)
                {
                    fingerDistancePrev = 0;
                    fingerDistance = 0;
                    zoomBy = 0;
                }
                fingerDistancePrev = fingerDistance;
                Debug.Log("2 fingers touching");
                maincamera.GetComponent<Camera>().fieldOfView -= zoomBy;
            }
        }
    }
}
