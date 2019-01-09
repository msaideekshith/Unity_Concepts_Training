//Assets/Editor/KeywordReplace.cs
using UnityEngine;
using UnityEditor;
using System.Collections;

public class ReplaceNames : UnityEditor.AssetModificationProcessor
{

	public static void OnWillCreateAsset(string path)
	{
		path = path.Replace(".meta", "");
		//Debug.Log(path);
		int index = path.LastIndexOf(".");
		//Debug.Log(index);
		if (index == -1) return;

		string file = path.Substring(index);
		//Debug.Log(file);
		if (file != ".cs" && file != ".js") return;

		index = Application.dataPath.LastIndexOf("Assets");
		//Debug.Log(index);
		path = Application.dataPath.Substring(0, index) + path;
		//Debug.Log(path);
		file = System.IO.File.ReadAllText(path);
		//Debug.Log(file);

		file = file.Replace("#CREATIONDATE#", System.DateTime.Now + "");
		file = file.Replace("#DEVELOPER#", "TheGameLearner");

		System.IO.File.WriteAllText(path, file);
		AssetDatabase.Refresh();
	}
}
