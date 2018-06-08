using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;

public class TrackMetadataDBObject : MonoBehaviour {
	public string asin;
	public string title;
	public string artist;
	public string imageUrl;
	public string sampleUrl;

	public TrackMetadataDBObject(SqliteDataReader reader) {
		asin = reader.GetString(0);
		title = reader.GetString(1);
		artist = reader.GetString(2);
		imageUrl = reader.GetString(3);
		sampleUrl = reader.GetString(4);
	}
}
