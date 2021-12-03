#include "notatka.h"

Note::Note(string ttitle): title(ttitle) {};
string Note::getTitle() {
    return title;
}
void Note::setTitle(string newTitle) {
    this->title = newTitle;
}

TextNote::TextNote(string noteTitle, string newContent) : Note(noteTitle) {
    this->content = newContent;
}
string TextNote::getContent() {
    return content;
}

void TextNote::setContent() {
    string line;

    cout << "Wpisz zawartość notatki \" " << title << " \": ";
    getline(cin, line);
    this->content = line;
}