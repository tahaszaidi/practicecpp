#include <iostream>
#include <unistd.h> //for usleep( )
using namespace std;

class Book {
    private:

    public:
        Book(string newTitle, string newAuthor, int newPages, int newISBN);
        Book();
        string title;
        string author;
        int pages;
        int isbn;
        bool beenRead = false;

};

Book::Book()
{
    title = "no title";
    author = "no author";
    pages = 0;
    isbn = 1;

}

Book::Book(string newTitle, string newAuthor, int newPages, int newISBN)
{
    cout << "New book just dropped?" << endl;
    title = newTitle;
    author = newAuthor;
    pages = newPages;
    isbn = newISBN;
}

void hasBeenRead(Book& theBook)
{
    theBook.beenRead = true;
    cout << "Congrats smarty pants" << endl;
}

void isThisALongBook(Book& theBook)
{
    if(theBook.pages > 100)
    {
        cout << "This is gonna take you a few days" << endl;
    }
    else
    {
        cout << "You can probably knock it out today" << endl;
    }
}

int main () 
{
    
    char answer;
    Book book1("Doctor Shabazz pt. II", "Cornelious Corndog", 420, 123543);
    Book book2("Attack on Titan", "Guy", 1235464, 10);
    Book book3();

    cout << "Have you read " << book1.title << " (y/n) " << endl;
    cin >> answer;

    usleep(2000000);

    if(answer == 'y' || answer == 'Y'){
        hasBeenRead(book1);
    }
    else if(answer == 'n' || answer == 'N'){
        cout << "You should read more" << endl;
    }
    else{
        cout << "You are speaking gibberish" << endl;
    }

    usleep(2000000);

    cout << "Are you wondering if " << book2.title << " is a long book? (y/n)" << endl;
    cin >> answer;
    usleep(3000000);
     if(answer == 'y' || answer == 'Y')
     {
        isThisALongBook(book2);
     }
    else
    {
        cout << "Okay, nevermind then!" << endl;
    }

}