package org.some_company_name;

public class MusicPlayer {

    public Music music;

    public MusicPlayer(Music music) {
        this.music = music;
    }

    public void playMusic()  {
        System.out.println("Playing: " + music.getMusic());
    }
}
