
#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    void getData() {
        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Price: ";
        cin >> price;

        if(price < 0)
            throw 1;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int pages;

public:
    void accept() {
        getData();

        cout << "Enter Number of Pages: ";
        cin >> pages;

        if(pages < 0)
            throw 1;
    }

    void show() {
        display();
        cout << "Pages: " << pages << endl;
    }

    void reset() {
        title = "";
        price = 0;
        pages = 0;
    }
};

class Tape : public Publication {
    float time;

public:
    void accept() {
        getData();

        cout << "Enter Playing Time: ";
        cin >> time;

        if(time < 0)
            throw 1;
    }

    void show() {
        display();
        cout << "Playing Time: " << time << " minutes" << endl;
    }

    void reset() {
        title = "";
        price = 0;
        time = 0;
    }
};

int main() {
    Book b;
    Tape t;

    try {
        cout << "\nEnter Book Details:\n";
        b.accept();

        cout << "\nEnter Tape Details:\n";
        t.accept();
    }
    catch(...) {
        cout << "\nInvalid Data! All values reset to zero.\n";
        b.reset();
        t.reset();
    }

    cout << "\nBook Details:\n";
    b.show();

    cout << "\nTape Details:\n";
    t.show();

    return 0;
}
