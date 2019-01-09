/*
The Script is created by TGL(TheGameLearner)
https://answers.unity.com/users/1044949/thegamelearner.html
https://forum.unity.com/members/thegamelearner.1695462/
*/
/*
	* Developer Name : TheGameLearner
	* Creation Date : 12/26/2018 4:23:43 PM
*/
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.Networking;


/*
{
  "id": "string", (not required)
  "firstName": "string",
  "lastName": "string",
  "emailId": "string",
  "password": "string",
  "country": "string",
  "accountType": "NORMAL" (not Required)
}
 */

public static class AddNewUser
{
	//public static string BaseUserUrl = "http://192.163.244.92:7999/MariaPublishers/services/maria/users";

	public const string MatchEmailPattern =
			@"^(([\w-]+\.)+[\w-]+|([a-zA-Z]{1}|[\w-]{2,}))@"
			+ @"((([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])\.([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])\."
			+ @"([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])\.([0-1]?[0-9]{1,2}|25[0-5]|2[0-4][0-9])){1}|"
			+ @"([a-zA-Z]+[\w-]+\.)+[a-zA-Z]{2,4})$";

	public static string AddUserFormValidation(Dictionary<string, string> keyValuePairs)
	{
		string l_fName, l_lName, l_email, l_Pass, l_country;
		if (keyValuePairs.TryGetValue("firstName", out l_fName)
			&& keyValuePairs.TryGetValue("lastName", out l_lName)
			&& keyValuePairs.TryGetValue("emailId", out l_email)
			&& keyValuePairs.TryGetValue("password", out l_Pass)
			&& keyValuePairs.TryGetValue("country", out l_country)
			)
		{
			if (
				l_fName == null || l_fName == "" ||
				l_lName == null || l_lName == "" ||
				l_email == null || l_email == "" || !ValidateEmail(l_email) ||
				l_Pass == null || l_Pass == "" ||
				l_country == null || l_country == ""
				)
			{
				Debug.LogWarning("l_fName = '" + l_fName   +"'");
				Debug.LogWarning("l_lName = '" + l_lName    +"'");
				Debug.LogWarning("l_email = '" + l_email    +"'");
				Debug.LogWarning("l_Pass = '" + l_Pass      +"'");
				Debug.LogWarning("l_country = '" + l_country+"'");
				return "Some Empty Fields Found during validating user to add";

			}
		}
		else
		{
			return "Some Fields not Found during validating user to add";
		}
		return "Success";
	}

	static bool ValidateEmail(string mailID)
	{
		if (mailID != "")
		{
			//Debug.Log("email received is '" + mailID + "'");
			//Debug.Log("email address pattern test results in " + Regex.IsMatch(mailID, MatchEmailPattern));
			return Regex.IsMatch(mailID, MatchEmailPattern);
		}
		else
		{
			Debug.Log("empty email");
			return false;
		}
	}
}
