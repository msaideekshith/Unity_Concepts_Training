using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/*
 * References : https://www.youtube.com/watch?v=c5Snsi68xzE&index=1&list=PL67XFC3MYQ6K0PXSad15xFrhxNL76r4Te
 */

public enum DriveMode { frontWheel, RearWheel, All };
public enum CarGear { Reverse, Neutral, first, second, third, fourth, fifth};

public class CarController01 : MonoBehaviour
{

	//Wheel Motor Mode
	[Header("The driving mode of car")]
	public DriveMode DrivingWheel = DriveMode.RearWheel;

	[Header("Colliders")]
	//FrontWheels
	public WheelCollider[] frontWheels;
	//RearWheels
	public WheelCollider[] rearWheels;
	[Space(10)]

	//Maximum Torque Exerted for Highest Gear
	[Header("Max Torque and turn angle")]
	public float maxTorque;
	//steer angle (not more than 35)
	[Range(5, 35)]
	public int MaxSteerAngle; //at lowest speed
	[Range(5, 10)]
	public int MinSteerAngle; //at highest speed


	[Header("Current Gear")]
	//Current Gear
	public CarGear gear = CarGear.Neutral;

	[Header("Average Horse Power")]
	public float avgHP = 330;

	[Header("Max Speed for gears")]
	public float[] speedTest;
	//rev, neutral is 0, 1st to 5th
	
	[Header("Input Values")]
	[SerializeField]
	//for calculating Horizontal Vertical Axis
	float hVal;
	[SerializeField]
	float vVal;

	[Header("Only to see values")]
	
	public float actualAvgRpm;
	public float speed;
	public float currSteer;
	//Debug
	//[SerializeField]
	private float toViewFLBreakTorque, toViewFRBreakTorque, toViewRLBreakTorque, toViewRRBreakTorque;
	//[SerializeField]
	private float toViewFLRpm, toViewFRRpm, toViewRLRpm, toViewRRRpm;
	//[SerializeField]
	private float toViewFLMotorTorque, toViewFRMotorTorque, toViewRLMotorTorque, toViewRRMotorTorque;

	[Space(30)]
	[Header ("Private Fields")]
	[SerializeField]
	private float idealRPM;
	//the torque curently applied to each wheel
	[SerializeField]
	float applingTorq2;
	
	//Torque Per Gear for all other Gears
	[Header("Gear Torques")]
	[SerializeField]
	float grRTor;
	[SerializeField]
	float gr1Tor, gr2Tor, gr3Tor, gr4Tor;
	

	[Header("Other Object References")]
	[SerializeField]
	Renderer[] BrakeLights;

	//need not visualize, its the body's rigidbody component
	Rigidbody rb;
	float applingTorq;
	float maxSpeedAtGear;
	Material[] brakeLightMats;
	//bool to change function calls based on Update
	bool cmd_breakPressed, cmd_breakUp, cmd_gearUp, cmd_gearDown;


	private void Start()
	{
		grRTor = maxTorque * (1 / 5f); // for going Reverse
		gr1Tor = maxTorque * (1 / 5f); // For 1st Gear Max Torque
		gr2Tor = maxTorque * (2 / 5f); // for 2nd Gear Max Torque
		gr3Tor = maxTorque * (3 / 5f); // for 3rd Gear Max Torque
		gr4Tor = maxTorque * (4 / 5f); // for 4th Gear Max Torque
									   //maxTorque will be maximum Torque for 5th Gear
		rb = GetComponent<Rigidbody>();

		if(MaxSteerAngle < MinSteerAngle)
		{
			MaxSteerAngle = MinSteerAngle;
			MinSteerAngle = 5;
		}

		//set up material References
		brakeLightMats = new Material[BrakeLights.Length];
		for(int i = 0; i<BrakeLights.Length; i++)
		{
			brakeLightMats[i] = BrakeLights[i].material;
		}

		Debug.LogWarning("CalculateWheelTorque should be called only when gear is changed");
		Debug.LogWarning("Use RPM in calculations");
	}

	private void Update()
	{

		hVal = Input.GetAxis("Horizontal");
		vVal = Input.GetAxis("Vertical");

		//breakPressed, breakUp, gearUp, gearDown;
		cmd_breakPressed = false;
		cmd_breakUp = false;
		cmd_gearUp = false;
		cmd_gearDown = false;
		if(Input.GetKeyUp(KeyCode.Space))
		{
			cmd_breakUp = true;
		}
		else if (Input.GetKey(KeyCode.Space))
		{
			cmd_breakPressed = true;
		}
		else if(!Input.GetKeyDown(KeyCode.Space))
		{
			if(cmd_breakUp)
				cmd_breakPressed = true;
		}

		if(Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.LeftCommand))
		{
			cmd_gearDown = true;
		}
		else if(Input.GetKeyDown(KeyCode.CapsLock))
		{
			cmd_gearUp = true;
		}

	}

	private void FixedUpdate()
	{
		speed = rb.velocity.magnitude;


		/*later add a condition to call this only when gear changes*/
		//calculate the Torque to apply depending on gear
		CalculateWheelTorque();

		//apply motor Torque to the wheels after the wheels look in direction to travel
		//apply steerin angle to the wheels
		SteerWheels();

		if (cmd_breakPressed)
		{
			//if brakes are pressed, no torque should be added
			ApplyBrakes();
		}
		else if (cmd_breakUp)
		{
			//remove all brake torques before applying motorTorque
			RemoveAllBrakes();
		}
		else
		{
			calcTorqueRPM();
			//brakes are not applied and wheels are looking in direction to travel
			ApplyMotorTorque();
		}

		if (cmd_gearUp)
		{
			GoGearUp();
		}
		else if (cmd_gearDown)
		{
			GoGearDown();
		}
		Debugw();
	}

	void CalculateWheelTorque()
	{
		switch (gear)
		{
			case CarGear.Reverse:
				Debug.LogWarning("make sure to add conditions to switch to rev gear");
				applingTorq = -grRTor; //negaive as has to go in reverse gear
				break;
			case CarGear.Neutral:
				applingTorq = 0;
				break;
			case CarGear.first:
				applingTorq = gr1Tor;
				break;
			case CarGear.second:
				applingTorq = gr2Tor;
				break;
			case CarGear.third:
				applingTorq = gr3Tor;
				break;
			case CarGear.fourth:
				applingTorq = gr4Tor;
				break;
			case CarGear.fifth:
				applingTorq = maxTorque;
				break;
			default:
				Debug.LogWarning("Default case of CalculateGearTorque reached");
				applingTorq = 0;
				break;
		}

		
	}

	void ApplyMotorTorque()
	{
		//torque will be applied conditionally bsed on current speed and gear and max speed per gear
		if(speed < MaxSpeedAtGear())
		{
			//if you want to go reverse without changing gear to reverse, the speed will be 0
			if ((vVal < 0 && gear != CarGear.Reverse )||( vVal > 0  && gear == CarGear.Reverse))
			{
				applingTorq2 = 0;
			}
			else if(vVal < 0 && gear == CarGear.Reverse)
			{
				//so that negative applingTorq and negative vVal doesn't make it go forward
				applingTorq2 = Mathf.Abs(vVal) * applingTorq;
			}
			else
			{
				//torque is applied only if the current speed is less than the max speed for this gear
				applingTorq2 = vVal * applingTorq;
			}
		}
		else
		{
			//otherwise zero torque is applied
			applingTorq2 = 0;
		}
		//apply the applingTorq2 to the wheels based on DrivingWheel Mode
		switch (DrivingWheel)
		{
			case DriveMode.RearWheel:
				foreach (WheelCollider i in rearWheels)
				{
					i.motorTorque = applingTorq2;
				}
				break;
			case DriveMode.frontWheel:
				foreach (WheelCollider i in frontWheels)
				{
					i.motorTorque = applingTorq2;
				}
				break;
			case DriveMode.All:
				foreach (WheelCollider i in rearWheels)
				{
					i.motorTorque = applingTorq2;
				}
				foreach (WheelCollider i in frontWheels)
				{
					i.motorTorque = applingTorq2;
				}
				break;
			default:
				Debug.LogWarning("Default case of ApplyMotorTorque reached");
				foreach (WheelCollider i in rearWheels)
				{
					i.motorTorque = 0;
				}
				foreach (WheelCollider i in frontWheels)
				{
					i.motorTorque = 0;
				}
				break;
		}
	}

	void SteerWheels()
	{
		//lerp the steer from max to min angle based on current speed w.r.t. top speed possible
		currSteer = hVal * Mathf.Lerp(MaxSteerAngle, MinSteerAngle, speed / speedTest[speedTest.Length-1]);
		
		//generally only front wheels move in direction
		foreach (WheelCollider i in frontWheels)
		{
			i.steerAngle = currSteer;
		}
	}

	void ApplyBrakes()
	{
		switch (DrivingWheel)
		{
			case DriveMode.RearWheel:
				foreach (WheelCollider i in rearWheels)
				{
					i.motorTorque = 0;
					i.brakeTorque =  Mathf.Abs(applingTorq);
				}
				break;
			case DriveMode.frontWheel:
				foreach (WheelCollider i in frontWheels)
				{
					i.motorTorque = 0;
					i.brakeTorque = Mathf.Abs(applingTorq);
				}
				break;
			case DriveMode.All:
				foreach (WheelCollider i in rearWheels)
				{
					i.motorTorque = 0;
					i.brakeTorque = Mathf.Abs(applingTorq);
				}
				foreach (WheelCollider i in frontWheels)
				{
					i.motorTorque = 0;
					i.brakeTorque = Mathf.Abs(applingTorq);
				}
				break;
			default:
				Debug.LogWarning("Default case of ApplyBrakes reached");
				
				break;
		}
		foreach(Material i in brakeLightMats)
		{
			//mat.SetColor("_EmissionColor", Color.red);
			i.SetColor("_EmissionColor", Color.red);
		}
	}

	void RemoveAllBrakes()
	{
		foreach (WheelCollider i in rearWheels)
		{
			i.brakeTorque = 0;
		}
		foreach (WheelCollider i in frontWheels)
		{
			i.brakeTorque = 0;
		}
		foreach (Material i in brakeLightMats)
		{
			//mat.SetColor("_EmissionColor", finalColor);
			i.SetColor("_EmissionColor", Color.black);
		}
	}

	float GearRatio()
	{
		/*
		 * gear ratio :
		 * G.R. = Torque (o/p) / Torque (i/p)
		 * G.R. = 
		 * */
		switch (gear)
		{
			case CarGear.Reverse:
				return 3.166f;
			case CarGear.Neutral:
				return 0;
			case CarGear.first:
				return 3.166f;
			case CarGear.second:
				return 1.882f;
			case CarGear.third:
				return 1.296f;
			case CarGear.fourth:
				return 0.972f;
			case CarGear.fifth:
				return 0.738f;
			default:
				return 3.0f;
		}
		
	}

	//target Hp to reach
	float targetHP;
	float calcTargetHP()
	{
		switch (gear)
		{
			case CarGear.Reverse:
				targetHP = avgHP - 20;
				break;
			case CarGear.Neutral:
				targetHP = 0;
				break;
			case CarGear.first:
				targetHP = avgHP - 20;
				break;
			case CarGear.second:
				targetHP = avgHP - 10;
				break;
			case CarGear.third:
				targetHP = avgHP;
				break;
			case CarGear.fourth:
				targetHP = avgHP + 10;
				break;
			case CarGear.fifth:
				targetHP = avgHP + 20;
				break;
			default:
				targetHP = 3.0f;
				break;
		}
		return targetHP;
	}

	public float getSpeed()
	{
		return speed;
	}

	void calcTorqueRPM()
	{
		//the torque as per absolute Value is applingTorq
		//wheel torque = Engine Torque * gear ratio
		//applying torque on each wheel = wheel Torque / 4
		if (DrivingWheel == DriveMode.All)
		{
			applingTorq = (applingTorq * GearRatio()) / 4f;
		}
		else
		{
			applingTorq = (applingTorq * GearRatio()) / 2f;
		}

		//The HP is identified by calcTargetHP
		//relation between torque and RPM is HP = torque * RPM
		//RPM
		idealRPM = calcTargetHP() / applingTorq;

	}

	float MaxSpeedAtGear()
	{		
		switch(gear)
		{
			case CarGear.Reverse:
				maxSpeedAtGear = speedTest[0];
				break;
			case CarGear.Neutral:
				maxSpeedAtGear = speedTest[1];
				break;
			case CarGear.first:
				maxSpeedAtGear = speedTest[2];
				break;
			case CarGear.second:
				maxSpeedAtGear = speedTest[3];
				break;
			case CarGear.third:
				maxSpeedAtGear = speedTest[4];
				break;
			case CarGear.fourth:
				maxSpeedAtGear = speedTest[5];
				break;
			case CarGear.fifth:
				maxSpeedAtGear = speedTest[6];
				break;
			default:
				maxSpeedAtGear = 0;
				Debug.LogWarning("default case of MaxSpeedAtGear() reached");
				break;
		}
		
		return maxSpeedAtGear;
	}

	/// <summary>
	/// changes the gear to upper gear
	/// </summary>
	public void GoGearUp()
	{
		switch (gear)
		{
			case CarGear.Reverse:
				gear = CarGear.Neutral;
				break;
			case CarGear.Neutral:
				gear = CarGear.first;
				break;
			case CarGear.first:
				gear = CarGear.second;
				break;
			case CarGear.second:
				gear = CarGear.third;
				break;
			case CarGear.third:
				gear = CarGear.fourth;
				break;
			case CarGear.fourth:
				gear = CarGear.fifth;
				break;
			case CarGear.fifth:
				gear = CarGear.fifth;
				break;
			default:
				Debug.LogWarning("default case of GoGearUp() reached");
				break;
		}
	}

	/// <summary>
	/// changes the gear to lower gear
	/// </summary>
	public void GoGearDown()
	{
		switch (gear)
		{
			case CarGear.Reverse:
				gear = CarGear.Reverse;
				break;
			case CarGear.Neutral:
				gear = CarGear.Reverse;
				break;
			case CarGear.first:
				gear = CarGear.Neutral;
				break;
			case CarGear.second:
				gear = CarGear.first;
				break;
			case CarGear.third:
				gear = CarGear.second;
				break;
			case CarGear.fourth:
				gear = CarGear.third;
				break;
			case CarGear.fifth:
				gear = CarGear.fourth;
				break;
			default:
				Debug.LogWarning("default case of GoGearDown() reached");
				break;
		}
	}



	void Debugw()
	{
		actualAvgRpm = 0;

		foreach (WheelCollider i in frontWheels)
		{
			actualAvgRpm += i.rpm;
		}
		foreach (WheelCollider i in rearWheels)
		{
			actualAvgRpm += i.rpm;
		}
		actualAvgRpm /= 4;

		//show MotorTorque
		Deb_showCurrMotorTorque();
		//show Break Torque
		Deb_showCurrBreakTorque();
		//show RPM
		Deb_showCurrentRPM();
	}

	void Deb_showCurrMotorTorque()
	{
		toViewFLMotorTorque = frontWheels[0].motorTorque;
		toViewFRMotorTorque = frontWheels[1].motorTorque;
		toViewRLMotorTorque =  rearWheels[0].motorTorque;
		toViewRRMotorTorque =  rearWheels[1].motorTorque;
	}
	void Deb_showCurrBreakTorque()
	{
		toViewFLBreakTorque = frontWheels[0].brakeTorque;
		toViewFRBreakTorque = frontWheels[1].brakeTorque;
		toViewRLBreakTorque =  rearWheels[0].brakeTorque;
		toViewRRBreakTorque =  rearWheels[1].brakeTorque;
	}
	void Deb_showCurrentRPM()
	{
		toViewFLRpm = frontWheels[0].rpm;
		toViewFRRpm = frontWheels[1].rpm;
		toViewRLRpm =  rearWheels[0].rpm;
		toViewRRRpm =  rearWheels[1].rpm;
	}

}
