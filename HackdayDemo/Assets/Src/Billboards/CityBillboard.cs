using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Wrld;
using Wrld.Space;
using Wrld.MapCamera;

public class CityBillboard : MonoBehaviour {
	public GameObject trackPanelPrefab;
	private float latitude;
	private float longitude;
	private GeographicTransform coordinateFrame;
	private LatLong geoPos;
	private Canvas canvas;
	private float initialYOffset = 260.0f;
	private float yOffsetPadding = -100.0f;

	private List<GameObject> trackPanels;

	public void Initialzie(CityPopularityDBObject cityPopularity, Dictionary<string, TrackMetadataDBObject> trackMetadata) {
		latitude = cityPopularity.latitude;
		longitude = cityPopularity.longitude;
		coordinateFrame = GetComponentInChildren<GeographicTransform>();
		geoPos = LatLong.FromDegrees(latitude, longitude);
		coordinateFrame.SetPosition(geoPos);

		trackPanels = new List<GameObject>();

		canvas = GetComponentInChildren<Canvas>();
		canvas.GetComponentInChildren<Text>().text = cityPopularity.cityName;

		if (!trackMetadata.ContainsKey(cityPopularity.trackList[0])) {
			return;
		}
		
		InitializeTrackPanelHeader(trackMetadata[cityPopularity.trackList[0]]);
		
		
		for(int i = 1; i < cityPopularity.trackList.Length; i++) {
			string trackAsin = cityPopularity.trackList[i];
			if (!trackMetadata.ContainsKey(trackAsin)) {
				continue;
			}

			GameObject trackPanel = GameObject.Instantiate(trackPanelPrefab);
			trackPanel.transform.parent = canvas.transform;

			Vector3 pos = new Vector3(0.0f, initialYOffset + i * yOffsetPadding, 0.0f);
			trackPanel.transform.position = pos;
			
			InitializeTrackPanel(trackPanel, trackMetadata[trackAsin]);
			trackPanels.Add(trackPanel);
		}

		HideOrShowTrackPanels();

		Api.Instance.GeographicApi.RegisterGeographicTransform(coordinateFrame);
	}

	private void OnDisable()
    {
        Api.Instance.GeographicApi.UnregisterGeographicTransform(coordinateFrame);
    }

	private void InitializeTrackPanelHeader(TrackMetadataDBObject metadata) {
		RectTransform trackHeaderPanel = canvas.GetComponentsInChildren<RectTransform>()[3];
		initialYOffset = trackHeaderPanel.transform.position.y;
		InitializeTrackPanel(trackHeaderPanel.gameObject, metadata);
	}

	private void InitializeTrackPanel(GameObject trackPanel, TrackMetadataDBObject metadata) {
		Text title = trackPanel.GetComponentsInChildren<Text>()[0];
		Text artist = trackPanel.GetComponentsInChildren<Text>()[1];
		Image album = trackPanel.GetComponentsInChildren<Image>()[1];

		title.text = metadata.title;
		artist.text = metadata.artist;
		StartCoroutine(GetAlbumImage(album, metadata.imageUrl));
		trackPanel.GetComponentInChildren<PlaySample>().Initialize(metadata.sampleUrl);
	}

	IEnumerator GetAlbumImage(Image album, string url) {
		using (WWW www = new WWW(url))
        {
            // Wait for download to complete
            yield return www;

            album.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));
        }
	}

	public void OnCityNameClicked() {
		Api.Instance.CameraApi.MoveTo(LatLong.FromDegrees(latitude, longitude), 3000.0f);
	}

	public void OnTrackDropdownClicked() {
		Debug.Log("OnTrackDropdownClicked" + canvas.GetComponentInChildren<Text>().text);
		HideOrShowTrackPanels();
	}

	private void HideOrShowTrackPanels() {
		foreach(GameObject trackPanel in trackPanels) {
			trackPanel.SetActive(!trackPanel.activeSelf);
		}
	}
}
