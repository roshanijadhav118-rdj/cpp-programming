#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
protected:
    int itemId;
    string title;

public:
    void getItem()
    {
        cout << "Enter Item ID: ";
        cin >> itemId;
        cout << "Enter Title: ";
        cin >> title;
    }

    void displayItem()
    {
        cout << "Item ID: " << itemId << endl;
        cout << "Title: " << title << endl;
    }
};

class Book : public LibraryItem
{
private:
    string author;
    int pages;

public:
    void getBook()
    {
        getItem();

        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }

    void displayBook()
    {
        displayItem();
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNo;
    string month;

public:
    void getMagazine()
    {
        getItem();

        cout << "Enter Issue Number: ";
        cin >> issueNo;
        cout << "Enter Month: ";
        cin >> month;
    }

    void displayMagazine()
    {
        displayItem();
        cout << "Issue Number: " << issueNo << endl;
        cout << "Month: " << month << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    b.getBook();
    m.getMagazine();
    b.displayBook();
    m.displayMagazine();

    return 0;
}
