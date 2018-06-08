using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;

public class MetadataLoader : Singleton<MetadataLoader> {
	private SQLiteHelper sqlHelper;

	public void Initialize() {
		sqlHelper = new SQLiteHelper();
		sqlHelper.InitializeDBConnection();
	}

	public List<CityPopularityDBObject> LoadCityPopularities() {
		List<CityPopularityDBObject> result = new List<CityPopularityDBObject>();

		SqliteCommand cmd = sqlHelper.CreateTextCommand("SELECT * FROM city_popularity");
        SqliteDataReader reader = sqlHelper.ExecuteCommand(cmd);

        while (reader.Read()) {
            CityPopularityDBObject row = new CityPopularityDBObject(reader);
            result.Add(row);
        }
        sqlHelper.CloseResultReader(reader);

		return result;
	}

	public List<TrackMetadataDBObject> LoadTrackMetadata() {
		List<TrackMetadataDBObject> result = new List<TrackMetadataDBObject>();

		SqliteCommand cmd = sqlHelper.CreateTextCommand("SELECT * FROM track_metadata");
        SqliteDataReader reader = sqlHelper.ExecuteCommand(cmd);

        while (reader.Read()) {
            TrackMetadataDBObject row = new TrackMetadataDBObject(reader);
            result.Add(row);
        }
        sqlHelper.CloseResultReader(reader);

		return result;
	}
}
