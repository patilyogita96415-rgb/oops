
#include <iostream>
using namespace std;

class Complex {
    int real, img;

public:
    Complex() {
        real = 0;
        img = 0;
    }

    Complex(int r, int i) {
        real = r;
        img = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, img + c.img);
    }

    Complex operator*(Complex c) {
        return Complex(real*c.real - img*c.img,
                       real*c.img + img*c.real);
    }

    friend istream& operator>>(istream& in, Complex& c) {
        in >> c.real >> c.img;
        return in;
    }

    friend ostream& operator<<(ostream& out, Complex c) {
        out << c.real << " + " << c.img << "i";
        return out;
    }
};

int main() {
    Complex c1, c2, sum, mul;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> c1;

    cout << "Enter real and imaginary parts of second number: ";
    cin >> c2;

    sum = c1 + c2;
    mul = c1 * c2;

    cout << "Addition: " << sum << endl;
    cout << "Multiplication: " << mul << endl;

    return 0;
}
