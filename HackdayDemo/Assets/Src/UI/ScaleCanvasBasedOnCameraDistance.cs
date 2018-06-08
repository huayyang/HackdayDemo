using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleCanvasBasedOnCameraDistance : MonoBehaviour {
	private Camera mainCamera;
	private Vector3 initialScale; 

	// Use this for initialization
	void Start () {
		mainCamera = Camera.main;
		initialScale = transform.localScale;
	}
	
	// Update is called once per frame
	void Update () {
		Plane plane = new Plane(mainCamera.transform.forward, mainCamera.transform.position); 
		float dist = plane.GetDistanceToPoint(transform.position);
		float factor = dist / 2000.0f;
		if (factor < 1.0f) {
			factor = 1.0f;
		}
		transform.localScale = initialScale * factor; 
	}
}
