using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicManager : Singleton<MusicManager> {
	private AudioSource playingSource;

	public void StopPlayingMusic() {
		if (playingSource == null) {
			return;
		}

		playingSource.Stop();
	}

	public void PlayMusic(AudioSource audioSource) {
		StopPlayingMusic();
		playingSource = audioSource;

		playingSource.Play();
	}
}
