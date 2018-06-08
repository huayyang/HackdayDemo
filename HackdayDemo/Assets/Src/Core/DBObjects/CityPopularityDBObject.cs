using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;

public class CityPopularityDBObject {
	public int cityId;
	public string cityName;
	public float latitude;
	public float longitude;
	public string[] trackList;

	public CityPopularityDBObject(SqliteDataReader reader) {
		cityId = reader.GetInt32(0);
		cityName = reader.GetString(1);
		latitude = reader.GetFloat(2);
		longitude = reader.GetFloat(3);
		trackList = reader.GetString(4).Split(',');
	}
}
