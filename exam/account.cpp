#include <iostream>
#include "account.h"

account::account() {
    numdeposits = 0;
    numwithdraws = 0;
}
account::account(string name, long taxID, double balance) {
    numdeposits = 0;
    numwithdraws = 0;
}
void account::SetName(string n) {
    name = n;
}
void account::SetTaxID(long x) {
    taxID = x;
}
void account::SetBalance(double b) {
    balance = b;
}
string account::GetName() {
    return name;
}
long account::GetTaxID() {
    return taxID;
}
double account::GetBalance() {
    return balance;
}
void account::MakeDeposit(double amount) {
    balance += amount;
    numdeposits++;
}
void account::display() {
    cout << "Name: " << account::GetName() << ", taxID: " << account::GetTaxID() << ", balance: $" << account::GetBalance() << endl;
}
