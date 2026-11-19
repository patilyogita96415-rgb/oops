
#include <iostream>
using namespace std;

class ATM {
    float balance;

public:
    ATM() {
        balance = 5000;
    }

    void checkBalance() {
        cout << "\nAvailable Balance: " << balance << endl;
    }

    void deposit(float amount) {
        if(amount <= 0)
            throw 1;

        balance += amount;

        cout << "Money Deposited Successfully!\n";
    }

    void withdraw(float amount) {
        if(amount <= 0)
            throw 1;

        if(amount > balance)
            throw 2;

        balance -= amount;

        cout << "Money Withdrawn Successfully!\n";
    }
};

int main() {
    ATM a;
    int choice;
    float amount;

    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        try {
            if(cin.fail())
                throw 1;

            switch(choice) {

                case 1:
                    a.checkBalance();
                    break;

                case 2:
                    cout << "Enter Amount: ";
                    cin >> amount;

                    if(cin.fail())
                        throw 1;

                    a.deposit(amount);
                    break;

                case 3:
                    cout << "Enter Amount: ";
                    cin >> amount;

                    if(cin.fail())
                        throw 1;

                    a.withdraw(amount);
                    break;

                case 4:
                    cout << "Thank You!\n";
                    break;

                default:
                    cout << "Invalid Choice!\n";
            }
        }
        catch(int e) {
            if(e == 1)
                cout << "Invalid Input or Amount!\n";

            else if(e == 2)
                cout << "Insufficient Balance!\n";
        }

    } while(choice != 4);

    return 0;
}
