
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int age;

    // Writing into file
    ofstream fout("student.txt");

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Age: ";
    cin >> age;

    fout << name << endl;
    fout << age << endl;

    fout.close();

    cout << "\nData Written Successfully!\n";

    // Reading from file
    ifstream fin("student.txt");

    fin >> name;
    fin >> age;

    cout << "\nStudent Details:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    fin.close();

    return 0;
}
