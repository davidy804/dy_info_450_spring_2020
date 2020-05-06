#include <iostream>
#include "savings.h"

savings::savings(){}
savings::savings(string name, long taxID, double balance){}
void savings::DoWithdraw(double amount) {
    account::SetBalance(account::GetBalance() - amount);
    numwithdraws++;
}
void savings::display() {
    account::display();
    cout << "Account's Withdrawal Record: " << numwithdraws << ", Deposit Record: " << numdeposits << endl;
}
