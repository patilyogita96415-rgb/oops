
#include <iostream>
using namespace std;

class Matrix {
    int a[10][10], r, c;

public:
    void read() {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter matrix elements:\n";

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix add(Matrix m) {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    Matrix subtract(Matrix m) {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                temp.a[i][j] = a[i][j] - m.a[i][j];

        return temp;
    }

    Matrix multiply(Matrix m) {
        Matrix temp;
        temp.r = r;
        temp.c = m.c;

        for(int i = 0; i < temp.r; i++) {
            for(int j = 0; j < temp.c; j++) {
                temp.a[i][j] = 0;

                for(int k = 0; k < c; k++) {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }

    int getRows() { return r; }
    int getCols() { return c; }
};

int main() {
    Matrix m1, m2, result;

    cout << "Enter First Matrix:\n";
    m1.read();

    cout << "Enter Second Matrix:\n";
    m2.read();

    if(m1.getRows() == m2.getRows() &&
       m1.getCols() == m2.getCols()) {

        result = m1.add(m2);
        cout << "\nAddition:\n";
        result.display();

        result = m1.subtract(m2);
        cout << "\nSubtraction:\n";
        result.display();
    }
    else {
        cout << "Addition and Subtraction not possible.\n";
    }

    if(m1.getCols() == m2.getRows()) {
        result = m1.multiply(m2);
        cout << "\nMultiplication:\n";
        result.display();
    }
    else {
        cout << "Multiplication not possible.\n";
    }

    return 0;
}
