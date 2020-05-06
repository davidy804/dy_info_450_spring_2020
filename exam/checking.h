#pragma once
#ifndef CHECKING
#define CHECKING

#include "account.h"

class checking : public account {
    private:
        int last10checks [10] = {};
        int checks = 0;
    public:
        checking();
        checking(std::string name, long taxID, double balance);
        void WriteCheck(int checknum, double amount);
        void display();
};

#endif
