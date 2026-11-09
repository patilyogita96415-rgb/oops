
#include <iostream>
#include <algorithm>
using namespace std;

class Staff {
    int id;
    string name;
    float salary, da, hra, tax, net;

public:
    void accept() {
        cout << "Enter Staff ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> salary;
    }

    void calculate() {
        da = salary * 0.25;
        hra = 800;
        tax = salary * 0.15;
        net = salary + da + hra - tax;
    }

    void display() {
        calculate();

        cout << "\n--- PAY SLIP ---\n";
        cout << "Staff ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "DA: " << da << endl;
        cout << "HRA: " << hra << endl;
        cout << "Income Tax: " << tax << endl;
        cout << "Net Salary: " << net << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    Staff s[3];

    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Staff Details:\n";
        s[i].accept();
    }

    for(int i = 0; i < 3; i++) {
        s[i].calculate();
    }

    sort(s, s + 3, [](Staff a, Staff b) {
        return a.getName() < b.getName();
    });

    cout << "\nStaff Details Sorted By Name:\n";

    for(int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}
