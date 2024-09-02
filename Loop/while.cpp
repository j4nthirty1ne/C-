#include <iostream>
using namespace std;

void menu() {
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "0. Exit" << endl;
}

void Addition() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Addition result: " << num1 + num2 << endl;
}

void Subtraction() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Subtraction result: " << num1 - num2 << endl;
}

void Multiplication() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Multiplication result: " << num1 * num2 << endl;
}

int main() {
    system("cls");
    while (true) {
        cout << "Please Enter your choice:"<< endl;
        menu();
        int choice;
        cin >> choice;
        system("cls");
        switch (choice) {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 0:
                cout << "Exiting..." << endl;
                system("pause");
                
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
