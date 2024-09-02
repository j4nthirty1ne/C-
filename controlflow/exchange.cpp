#include <iostream>
using namespace std;

void USDtoKHR();
void KHRtoUSD();
void EURtoUSD();
int option;

int main() 
{
    system("cls");

    cout << "Welcome to Currency Converter!\n";
    cout << "Choose your option:\n";
    cout << "1. USD to KHR" << endl;
    cout << "2. KHR to USD" << endl;
    cout << "3. EUR to USD" << endl;

    cin >> option;

    switch (option) 
    {
    case 1: 
        USDtoKHR();
        break;
    case 2:
        KHRtoUSD();
        break;
    case 3:
        EURtoUSD();
        break;
    default:
        cout << "Invalid option" << endl;
    }

    return 0;
}

void USDtoKHR()
{
    double usd;
    double usd_rate = 4000; 

    cout << "Enter your money in USD: ";
    cin >> usd;
    
    double khr_amount = usd * usd_rate;
    cout << usd << " USD is " << khr_amount << " KHR." << endl;
}

void KHRtoUSD()
{
    double khr;
    double khr_rate = 4000; 

    cout << "Enter amount in KHR: ";
    cin >> khr;
    
    double usd = khr / khr_rate;
    cout << khr << " KHR is " << usd << " USD." << endl;
}

void EURtoUSD()
{
    double eur;
    double eur_rate = 1.2;

    cout << "Enter amount in EUR: ";
    cin >> eur;
    
    double usd = eur * eur_rate;
    cout << eur << " EUR is " << usd << " USD." << endl;
}
