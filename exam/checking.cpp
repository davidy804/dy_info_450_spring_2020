#include <iostream>
#include "checking.h"

checking::checking(){}
checking::checking(string name, long taxID, double balance){}
void checking::WriteCheck(int checknum, double amount) {
    last10checks[checks] = checknum;
    checks++;
    if (checks > 9) {
        checks = 0;
    }
    account::SetBalance(account::GetBalance() - amount);
    numwithdraws++;
}

void checking::display() {
    account::display();
    for (int i = 0; i < 10; i++) {
        cout << "Account's Check Register: " << last10checks[i] << endl;
    }
    cout << "Deposit Record: " << numdeposits << endl;
}
