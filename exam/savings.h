#pragma once
#ifndef SAVINGS
#define SAVINGS

#include "account.h"

class savings : public account {
    public:
        savings();
        savings(string name, long taxID, double balance);
        void DoWithdraw(double amount);
        void display();
};

#endif
