#include <iostream>
#include <list>
using namespace std;

class Song{
    friend class Playlist;

private:
    string title, artist;

public:
    Song(string ttitle, string aartist);
};

class Playlist{
private:
    string name;
    list<Song*> playlist;

public:
    void play();
    void createPlaylist();
    void loop();
    void next();
    void previous();
    void addSongToPlaylist();
    void addSong(Song* song);
    void deletesong();
};