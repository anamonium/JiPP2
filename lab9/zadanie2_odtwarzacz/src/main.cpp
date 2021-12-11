#include "odtwarzacz.h"

int main(){

    Playlist mojaplaylista;
    mojaplaylista.createPlaylist();
    int wybor;

    cout<<"Co chcesz zrobic?\n"
    <<"1 - dodaj piosenke do playlisty\n"
    <<"2 - usun piosenke z playlisty\n"
    <<"3 - odtwarzaj playliste\n"
    <<"4 - odtwarzaj playliste w petli\n"
    <<"5 - kolejna piosenka\n"
    <<"6 - poprzednia piosenka\n"
    <<"7 - zakoncz\n";


    while(1) {
        cout<<"Wybor = ";
        cin>>wybor;
        switch (wybor) {
            case 1:
                mojaplaylista.addSongToPlaylist();
                break;
            case 2:
                mojaplaylista.deletesong();
                break;
            case 3:
                mojaplaylista.play();
                break;
            case 4:
                mojaplaylista.loop();
                break;
            case 5:
                mojaplaylista.next();
                break;
            case 6:
                mojaplaylista.previous();
                break;
            case 7:
                exit(1);
            default:
                cout << "Podano zly numer\n";
                break;
        }
    }

}