#pragma once
#ifndef ACCOUNT
#define ACCOUNT

#include <string>

using namespace std;

class account {
    private:
        std::string name;
        long taxID;
        double balance;
    protected:
        int numdeposits;
        int numwithdraws;
    public:
        account();
        account(std::string name, long taxID, double balance);
        void SetName(std::string n);
        void SetTaxID(long x);
        void SetBalance(double b);
        std::string GetName();
        long GetTaxID();
        double GetBalance();
        void MakeDeposit(double amount);
        virtual void display();
};

#endif
