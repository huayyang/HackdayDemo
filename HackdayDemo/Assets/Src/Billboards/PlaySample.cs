using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaySample : MonoBehaviour {
	private string sampleUrl;
	private string realUrl;
	private AudioSource source;

	public void Initialize(string musicSample) {
		sampleUrl = musicSample;
		source = GetComponent<AudioSource>();
		if (realUrl == null) {
			realUrl = "";
			StartCoroutine(GetRealUrl());
		}
	}

	public void OnPlayButtonClicked() {
		if (source.isPlaying) {
			MusicManager.Instance.StopPlayingMusic();
			return;
		}

		if (realUrl == null) {
			realUrl = "";
			StartCoroutine(GetRealUrl());
		}

		StartCoroutine(GetSampleAudio());
	}

	private string correctUrl(string url) {
		int i = url.IndexOf(".net/") + 5;
		string firstPart = url.Substring(0, i);
		string secondPart = url.Substring(i);
		return firstPart + secondPart.Replace("/", "%2F");
	}

	IEnumerator GetRealUrl() {
		using (WWW www = new WWW(sampleUrl))
        {
            // Wait for download to complete
            yield return www;

            realUrl = correctUrl(www.url);
        }
	}

	IEnumerator GetSampleAudio() {
		using (WWW www = new WWW(realUrl))
        {
            // Wait for download to complete
            yield return www;


            source.clip = www.GetAudioClip(false, false, AudioType.MPEG);
			MusicManager.Instance.PlayMusic(source);
        }
	}
}
