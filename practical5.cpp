
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A Default Constructor\n";
    }

    A(int x) {
        cout << "A Parameterized Constructor\n";
    }

    A(const A &obj) {
        cout << "A Copy Constructor\n";
    }

    ~A() {
        cout << "A Destructor\n";
    }
};

class B {
public:
    B() {
        cout << "B Default Constructor\n";
    }

    ~B() {
        cout << "B Destructor\n";
    }
};

class C : public A, public B {
public:
    C() {
        cout << "C Constructor\n";
    }

    ~C() {
        cout << "C Destructor\n";
    }
};

int main() {
    A obj1;
    A obj2(10);
    A obj3(obj1);

    cout << "\nMultiple Inheritance:\n";

    C obj;

    return 0;
}
