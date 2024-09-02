#include <iostream>
using namespace std;

void options ()
{
    cout << "Options:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}

void Addition ()
{
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void Subtraction ()
{
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void Multiplication ()
{
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void Division ()
{
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2!= 0)
        cout << "Result: " << num1 / num2 << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;
}

int main ()
{
    system ("cls");
    int choice;
    do 
    {
        options();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
        system ("pause");
        system ("cls");  
    }
    while (choice!= 5);
    cout << "Exiting the program..." << endl;
    system ("pause");

    return 0;
}