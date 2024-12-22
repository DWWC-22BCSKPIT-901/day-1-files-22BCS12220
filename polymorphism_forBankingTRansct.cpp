#include <iostream>
#include <string>
using namespace std;

class BankTransaction {
public:
    virtual void performTransaction() = 0;
};

class Deposit : public BankTransaction {
    double amount;
public:
    void performTransaction() override {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        cout << "Deposited: " << amount << " successfully." << endl;
    }
};

class Withdrawal : public BankTransaction {
    double amount;
public:
    void performTransaction() override {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        cout << "Withdrawn: " << amount << " successfully." << endl;
    }
};

class CheckBalance : public BankTransaction {
    double balance;
public:
    CheckBalance(double bal) : balance(bal) {}
    void performTransaction() override {
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    BankTransaction* transaction;
    int choice;
    double initialBalance = 10000.0;

    while (true) {
        cout << "\nBanking System:\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            transaction = new Deposit();
            transaction->performTransaction();
            delete transaction;
            break;
        case 2:
            transaction = new Withdrawal();
            transaction->performTransaction();
            delete transaction;
            break;
        case 3:
            transaction = new CheckBalance(initialBalance);
            transaction->performTransaction();
            delete transaction;
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}
