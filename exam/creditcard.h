#pragma once
#ifndef CREDITCARD
#define CREDITCARD

#include "account.h"

class creditcard : public account {
    private:
        long cardnumber;
        std::string last10charges[10];
        int charges = 0;
    public:
        creditcard();
        creditcard(std::string name, long taxID, double balance);
        void DoCharge(std::string name, double amount);
        void MakePayment(double amount);
        void display();
};

#endif
