#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Book {
protected:
    string title;
    string author;

public:
    Book(const string& t, const string& a) : title(t), author(a) {}

    void read() {
        cout << "Читання книги: " << title << " автора " << author << "." << endl;
    }
};
class AudioBook : public Book {

    int duration;

public:
    AudioBook(const string& t, const string& a, int d) : Book(t, a), duration(d) {}

    void listen() {
        cout << "Прослуховування аудіокниги: " << title << " автора " << author
             << ". Тривалість: " << duration << " хвилин." << endl;
    }
};

int main() {
    system("chcp 65001");
    Book myBook("Майстер і Маргарита", "Михайло Булгаков");
    myBook.read();

    AudioBook myAudioBook("1984", "Джордж Орвелл", 600);
    myAudioBook.listen();

    return 0;
}
