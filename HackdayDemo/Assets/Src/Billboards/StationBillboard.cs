using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StationBillboard : MonoBehaviour {
	private List<CityPopularityDBObject> cityPopularities;
	private Dictionary<string, TrackMetadataDBObject> trackMetadata;

	private bool isPlaying;

	// Use this for initialization
	void Start () {
		InitializeMetadata();
	}

	private void InitializeMetadata() {
		cityPopularities = MetadataLoader.Instance.LoadCityPopularities();
		List<TrackMetadataDBObject> trackMetadataList = MetadataLoader.Instance.LoadTrackMetadata();
		trackMetadata = new Dictionary<string, TrackMetadataDBObject>();
		foreach(TrackMetadataDBObject metadata in trackMetadataList) {
			trackMetadata.Add(metadata.asin, metadata);
		}
	}
	
	public void OnPlayButtonClicked() {
		if (isPlaying) {
			MusicManager.Instance.StopPlayingMusic();
			isPlaying = false;
			return;
		}


	}

	public void OnPlayNextClicked() {
		Debug.Log("OnPlayNextClicked");
	}

	public void OnPlayPreviousClicked() {
		Debug.Log("OnPlayPreviousClicked");
	}
}
