#include <iostream> 
using namespace std;
#include "BankingService.h"
#include "BankingServiceImpl.h"



int main ()
{
    system ("cls");
    BankingService *bankingService = new BankingServiceImpl();
    bankingService-> deposit(1000.0);
    bankingService-> getBalance();
    bankingService-> withdraw(500.0);
    bankingService-> getBalance();
    bankingService-> deposit(100);
    bankingService-> getBalance();
    return 0;
}