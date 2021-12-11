#include "odtwarzacz.h"

Song::Song(string ttitle, string aartist): title(ttitle), artist(aartist) {};

void Playlist::addSong(Song *song) {
    playlist.push_back(song);
}

void Playlist::createPlaylist(){
    cout<<"Podaj tytul swojej playlisty"<<endl;
    getline(cin >> ws, name);

    Song* newSong = new Song("Pierwsza piosenka", "ABCD");
    addSong(newSong);
}
void Playlist::loop(){
    int i=1;
    list<Song*>::iterator x;
    if (playlist.size() > 0) {
        cout << "Odtwarzanie w petli: " << endl;
        for (x = playlist.begin(); x != playlist.end(); ++x) {
            cout<<"Piosenka nr. "<<i<<"\t\t";
            cout << (*x)->artist << "  -  " << (*x)->title << endl;
            i++;
        }
    }
}
void Playlist::next(){
    list<Song*>::iterator firstSong = playlist.begin();

    playlist.pop_front();
    playlist.push_back((*firstSong));
}
void Playlist::previous(){
    list<Song*>::iterator x = playlist.end();
    auto lastSong = prev(x, 1);
    playlist.pop_back();
    playlist.push_front(*lastSong);
}
void Playlist::addSongToPlaylist(){
    string newArtist, newTitle;
    cout << "Podaj wykonawcę: ";
    getline(cin >> ws, newArtist);
    cout << "Podaj tytuł utworu: ";
    getline(cin >> ws, newTitle);

    Song* newSong = new Song(newTitle, newArtist);
    addSong(newSong);
}
void Playlist::play(){
    list<Song *>::iterator song = playlist.begin();
    cout << "Aktualnie gra: " << endl;
    cout << "Tytuł: " << (*song)->artist << " - " << (*song)->title << endl;
}
void Playlist::deletesong(){
    string usun;
    int i = 0;
    list<Song*>::iterator x = playlist.begin();

    cout << "Podaj usuwany tytul: ";
    getline(cin >> ws, usun);

    while (x != playlist.end()) {
        if (((*x)->title.compare(usun)) == 0) {
            playlist.erase(x++);
            i++;
            cout<<"Piosenka usunieta\n";
            break;
        }
        else {
            ++x;
            i++;
        }
    }

    cout << "Nie ma utworu!" << endl;
}