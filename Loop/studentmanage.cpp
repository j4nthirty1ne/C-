#include <iostream>
using namespace std;

void displaymenu()
{
    cout << "=====| Options |=====" << endl;
    cout << "1. login" << endl;
    cout << "2. register" << endl;
    cout << "3. exit" << endl;
    cout << "=====================" << endl;
    cout << "Enter your choice: ";
}

string correctusername;
string correctpassword;

void login()
{
    system("cls");
    string username;
    string password;
    cout << "Enter your username: ";
    cin.ignore();
    getline (cin, username);
    cout << "Enter your password: ";
    cin >> password;

    while ((username != correctusername) || (password != correctpassword))
    {
        cout << "Invalid username or password. Try again." << endl;
        cout << "Enter your username: ";
        cin.ignore();
        getline (cin, username);
        cout << "Enter your password: ";
        cin >> password;
    }
    cout << "Login successful!" << endl;
}

void registerUser()
{
    cout << "Enter your username: ";
    cin.ignore();
    getline (cin, correctusername);
    cout << "Enter your password: ";
    cin >> correctpassword;
    cout << "Registration successful!" << endl;
}

int main()
{
    system ("cls");
    int option;
    
    do
    {
        displaymenu();
        cin >> option;
        
        switch (option)
        {
        case 1:
            login();
            break;
        case 2:
            registerUser();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 3);

    return 0;
}
