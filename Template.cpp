#include <iostream>
#include <string>

using namespace std;

template <class T>
class Library
{
private:
    T bookID;
    string bookName;
    string author;
    bool issued;

public:

    Library(T id, string name, string auth)
    {
        bookID = id;
        bookName = name;
        author = auth;
        issued = false;
    }

    void display()
    {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Name: " << bookName;
        cout << "\nAuthor: " << author;
        cout << "\nStatus: ";

        if (issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << "\n";
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "\nBook issued successfully.\n";
        }
        else
        {
            cout << "\nBook is already issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "\nBook returned successfully.\n";
        }
        else
        {
            cout << "\nBook was not issued.\n";
        }
    }
};

int main()
{
    Library<int> book1(101, "Object Oriented Programming", "Robert Lafore");

    Library<string> book2("CS102", "Database Management System", "Korth");

    cout << "LIBRARY MANAGEMENT SYSTEM\n";

    cout << "\nBook 1 Details:";
    book1.display();

    cout << "\nIssuing Book 1:";
    book1.issueBook();

    cout << "\nBook 1 Details after issuing:";
    book1.display();

    cout << "\n-----------------------------\n";

    cout << "\nBook 2 Details:";
    book2.display();

    return 0;
}