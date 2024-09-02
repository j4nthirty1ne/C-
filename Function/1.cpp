#include <iostream>
using namespace std;
void printGretting ();
void smartGreetting (string name, int PIN);
float Balance();
float CalculateTax (float Balance);



// int main ()
// {
//     system ("cls");
//     printGretting ();
    
//     string name;
//     int PIN;

//     cout << "Enter your name: ";
//     getline (cin, name);
    
//     cout << "Enter your PIN: ";
//     cin >> PIN;

//     smartGreetting (name, PIN);

//     return 0;
// }

int main ()
{
    system ("cls");
    float Salary = Balance();
    cout << "Your Salary is" << Salary <<" $" << endl;

    float paidTax = CalculateTax(Salary);
    cout << "You have to pay tax" << paidTax << endl;
}

float CalculateTax(float Balance)
{
    float tax = 0.2;
    return Balance * tax;
}

float Balance()
{
    return 100 + 50 + 60 - 45;
}
void printGretting ()
{
    cout << "Hello Kampujea, This is Kon Jruk tang 3 City" <<endl;
}

void smartGreetting (string name, int PIN)
{
    
    
    if (PIN == 1234)
    {
        cout << "Welcome, " << name << " From Kon jruk tang 3 City" << endl;
    }
    else 
    {
        cout << "Hello, " << name << " Your are not allowed" << endl;
    }
}