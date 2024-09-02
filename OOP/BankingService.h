#pragma once 
class BankingService 
{
    public:
       virtual void deposit(double cash) = 0;
       virtual void withdraw(double cash) = 0;
       virtual void getBalance() = 0;
};