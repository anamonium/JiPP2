#include <iostream>

using namespace std;

class Note{
protected:
    string title;

public:
    Note(string ttitle);
    string getTitle();
    void setTitle(string ttitle);
    virtual string getContent() = 0;
    virtual void setContent() = 0;
};

class TextNote: public Note{
public:
    TextNote(string noteTitle, string newContent);
    string getContent();
    void setContent();

private:
    string content;
};