#pragma once 
#include "BankingService.h"
#include <iostream>

using namespace std;

double globalCash = 0.0;

class BankingServiceImpl: public BankingService
{
    public:
    void deposit (double cash) override 
    {
        bool isLessOrEqualZero = (cash < 0 || cash == 0) ? true : false;
        if (isLessOrEqualZero)
        {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
        else 
        {
            globalCash += cash;
            cout << "Deposite successful. New Balance: $" << globalCash << endl;
        }
    }
    void withdraw (double cash) override
    {
        if (cash > globalCash)
        {
            cout << "Insufficient balance. Please enter a valid amount." << endl;
        }
        else 
        {
            globalCash -= cash;
            cout << "Withdraw successful. New Balance: $" << globalCash << endl;
        }
    }
    void getBalance() override
    {
        cout << "Your current balance is: $" << globalCash << endl;
    }
};