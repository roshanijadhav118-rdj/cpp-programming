#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNo;
    string name;
    double balance;

public:
    void getData() {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }

    virtual void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    void statement() {
        cout << "\n--- Account Statement ---\n";
        cout << "Account Number: " << accountNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    void withdraw() override {
        Account::withdraw();
    }
};

class CheckingAccount : public Account {
public:
    void withdraw() override {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance + 1000) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Withdrawal limit exceeded!\n";
        }
    }
};

int main() {
    int choice;

    cout << "1. Savings Account\n";
    cout << "2. Checking Account\n";
    cout << "Select account type: ";
    cin >> choice;

    SavingsAccount s;
    CheckingAccount c;

    if (choice == 1) {
        s.getData();
        s.deposit();
        s.withdraw();
        s.statement();
    } else if (choice == 2) {
        c.getData();
        c.deposit();
        c.withdraw();
        c.statement();
    } else {
        cout << "Invalid choice!";
    }

    return 0;
}