#include <iostream>
using namespace std;

void menu ()
{
    cout << "\nChoose an option:\n";
    cout << "1. Buy Pizza" << endl;
    cout << "2. Buy drinks" << endl;
    cout << "3. Buy Pizza and drinks" << endl;
    cout << "4. Exit" << endl;
}
int main() 
{
    menu ();
    cout << "Enter the option: ";
    int option;
    cin >> option;
    system ("cls");

    switch (option)
    {
        case 1:
            cout << "You've chosen to buy pizza." << endl;
            break;
        case 2:
            cout << "You've chosen to buy drinks." << endl;
            break;
        case 3:
            cout << "You've chosen to buy pizza and drinks." << endl;
            break;
        case 4:
            cout << "Good bye, See ya" << endl;
            return 0;
        default:
            cout << "Invalid option. Please try again." << endl;
    }

    return 0;
}