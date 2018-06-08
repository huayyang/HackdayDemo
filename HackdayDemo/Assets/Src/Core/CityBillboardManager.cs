using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Wrld;
using Wrld.Space;

public class CityBillboardManager : Singleton<CityBillboardManager> {
	public GameObject billbardPrefab;
	private List<CityPopularityDBObject> cityPopularities;
	private Dictionary<string, TrackMetadataDBObject> trackMetadata;

	public void Initialzie(List<CityPopularityDBObject> cityPopularityList, List<TrackMetadataDBObject> trackMetadataList) {
		cityPopularities = cityPopularityList;
		
		InitializeTrackMetadata(trackMetadataList);

		PlaceCityBillboardOnMap();
	}

	private void InitializeTrackMetadata(List<TrackMetadataDBObject> trackMetadataList) {
		trackMetadata = new Dictionary<string, TrackMetadataDBObject>();
		foreach(TrackMetadataDBObject metadata in trackMetadataList) {
			trackMetadata.Add(metadata.asin, metadata);
		}
	}
	
	private void PlaceCityBillboardOnMap() {
		foreach(CityPopularityDBObject cityPopularity in cityPopularities) {
			GameObject obj = GameObject.Instantiate(billbardPrefab);
			obj.GetComponent<CityBillboard>().Initialzie(cityPopularity, trackMetadata);
		}
	}

	
	// Update is called once per frame
	void Update () {
		
	}
}
