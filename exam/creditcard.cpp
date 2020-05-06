#include <iostream>
#include "creditcard.h"

creditcard::creditcard(){}
creditcard::creditcard(string name, long taxID, double balance){}
void creditcard::DoCharge(string name, double amount) {
    last10charges[charges] = name;
    charges++;
    if (charges > 9) {
        charges = 0;
    }
    account::SetBalance(account::GetBalance() - amount);
    numwithdraws++;
}
void creditcard::MakePayment(double amount) {
    account::SetBalance(account::GetBalance() + amount);
    numdeposits++;
}
void creditcard::display() {
    account::display();
    for (int i = 0; i < 10; i++) {
        cout << "Account's Charges: " << last10charges[i] << endl;
    }
    cout << "Deposit Record: " << numdeposits << endl;
}
