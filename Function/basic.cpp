#include <iostream>
using namespace std;

//1. Functions Prototypes
//Function has no return value and no parameters
void printGretting ();

// Function has no return value and has parameters
void smartGreetting (string name, int PIN);

// 3. Call function
int main ()
{
    system ("cls");
    printGretting ();
    
    smartGreetting ("Kon Jruk", 1324);
    string name = "Kon Trey";

    smartGreetting (name, 1234);

    return 0;
}

// 2. Function Definition
void printGretting ()
{
    cout << "Hello Kampujea "<<endl;
}

void smartGreetting (string name, int PIN)
{
    if (PIN == 1234)
    {cout << "Welcome, " << name << "  From Kon jruk tang 3" << endl;}
    else 
    {cout << "Hello, " << name << " Your are not allowed" << endl;}
}