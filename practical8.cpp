
#include <iostream>
using namespace std;

template <class T>
class Library {
    T id;
    string name;

public:
    void accept() {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Name: ";
        cin >> name;
    }

    void display() {
        cout << "\nBook Details:\n";
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
    }
};

int main() {
    Library<int> l1;

    l1.accept();
    l1.display();

    return 0;
}
