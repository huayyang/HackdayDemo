using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManager : Singleton<SceneManager> {

	// Use this for initialization
	void Start () {
		InitializeServices();
	}
	
	private void InitializeServices() {
		CityBillboardManager.Instance.Initialzie();
	}
}
