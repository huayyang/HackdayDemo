using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AppManager : Singleton<AppManager> {
	/// <summary>
    /// This function is called when the object becomes enabled and active.
    /// </summary>
    void OnEnable()
    {
        SceneManager.sceneLoaded += this.OnSceneLoaded;
    }

    /// <summary>
    /// This function is called when the behaviour becomes disabled or inactive.
    /// </summary>
    void OnDisable()
    {
        SceneManager.sceneLoaded -= this.OnSceneLoaded;
    }

	void OnSceneLoaded(Scene scene, LoadSceneMode sceneMode) {
        InitializeServices();
	}

	
	private void InitializeServices() {
		MetadataLoader.Instance.Initialize();

		List<CityPopularityDBObject> cityPopularities = MetadataLoader.Instance.LoadCityPopularities();
		List<TrackMetadataDBObject> trackMetadata = MetadataLoader.Instance.LoadTrackMetadata();
		
		CityBillboardManager.Instance.Initialzie(cityPopularities, trackMetadata);
	}
}
