#include <iostream>
#include "account.h"
#include "checking.h"
#include "creditcard.h"
#include "savings.h"

using namespace std;

void print_menu();

int main() {
    string user_input;
    string variable_type;
    string name;
    double amount;
    int checknum;

    checking CheckingAccount;
    CheckingAccount.SetName("Checking");
    CheckingAccount.SetTaxID(111);
    CheckingAccount.SetBalance(100);
    savings SavingsAccount;
    SavingsAccount.SetName("Savings");
    SavingsAccount.SetTaxID(222);
    SavingsAccount.SetBalance(100);
    creditcard CreditCardAccount;
    CreditCardAccount.SetName("Credit Card");
    CreditCardAccount.SetTaxID(333);
    CreditCardAccount.SetBalance(100);

    while (1) {
        cout << "Checking balance: $" << CheckingAccount.GetBalance() << " Savings balance: $" << SavingsAccount.GetBalance() << " Credit Card balance: $" << CreditCardAccount.GetBalance() << endl;
        print_menu();
        getline(cin, user_input);
        cout << "User entered: " << user_input << endl << endl;

        if (user_input == "0") {
            break;
        }
        if (user_input == "1") {
            cout << "Savings Account - Enter Deposit Amount: ";
            cin >> amount;
            SavingsAccount.MakeDeposit(amount);
        }
        if (user_input == "2") {
            cout << "Savings Account - Enter Withdraw Amount: ";
            cin >> amount;
            SavingsAccount.DoWithdraw(amount);
        }
        if (user_input == "3") {
            cout << "Checking Account - Enter Deposit Amount: ";
            cin >> amount;
            CheckingAccount.MakeDeposit(amount);
        }
        if (user_input == "4") {
            cout << "Checking Account - Enter Check Amount: ";
            cin >> amount;
            cout << "Checking Account - Enter Check Number: ";
            cin >> checknum;
            CheckingAccount.WriteCheck(checknum, amount);
        }
        if (user_input == "5") {
            cout << "Credit Card Account - Enter Payment Amount: ";
            cin >> amount;
            CreditCardAccount.MakePayment(amount);
        }
        if (user_input == "6") {
            cout << "Credit Card Account - Enter Charge Amount: ";
            cin >> amount;
            cout << "Credit Card Account - Enter Name: ";
            cin >> name;
            CreditCardAccount.DoCharge(name, amount);
        }
        if (user_input == "7") {
            SavingsAccount.display();
        }
        if (user_input == "8") {
            CheckingAccount.display();
        }
        if (user_input == "9") {
            CreditCardAccount.display();
        }
    }
}

void print_menu() {
    cout << "1. Savings Deposit" << endl;
    cout << "2. Savings Withdrawal" << endl;
    cout << "3. Checking Deposit" << endl;
    cout << "4. Write A Check" << endl;
    cout << "5. Credit Card Payment" << endl;
    cout << "6. Make A Charge" << endl;
    cout << "7. Display Savings" << endl;
    cout << "8. Display Checking" << endl;
    cout << "9. Display Credit Card" << endl;
    cout << "0. Exit" << endl;
}
