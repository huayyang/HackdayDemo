using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;

public class CityPopularityDBObject : MonoBehaviour {
	public string cityName;
	public float latitude;
	public float longitude;
	public string[] trackList;

	public CityPopularityDBObject(SqliteDataReader reader) {
		cityName = reader.GetString(0);
		latitude = reader.GetFloat(1);
		longitude = reader.GetFloat(2);
		trackList = reader.GetString(3).Split(',');
	}
}
