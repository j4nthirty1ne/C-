#include <iostream>
using namespace std;
int main()
{
    system ("cls");
    // int x = 5;
    // x = x + 1;
    // x += 1;
    // x -= 2;
    // x /= 3;
    // cout << "x = " << x << endl;
    // int y = 10;
    // int b = 5;
    // //b = y++;
    // b = ++y;
    // cout << "y = " << y << endl;
    // cout << "b = " << b << endl;

    // cout << "Please enter your age: ";
    // int age;
    // cin >> age;
    
    // bool result = age >= 18;
       
    // if (result) 
    // {
    //     cout << "You are eligible to vote." << endl;
    // }
    // else 
    // {
    //     cout << "You are not eligible to vote." << endl;
    //     cout << "Your age is " << (18 - age) << " years less than the required age." << endl;
    // }

    cout <<"=========|Menu Options|=========" << endl;
    cout <<"1. add product" << endl;
    cout <<"2. remove product" << endl;
    cout <<"3. view product" << endl;
    cout <<"0. exit" << endl;
    cout <<"==================================" << endl;
    int option ;
    cout <<"Enter the option you want to ";
    cin >> option;
    if (option != 0)
    {
        cout << "The System continues working"<< endl;
    }
    else 
    {
        cout << "The System will exit!" << endl;
    }

    //Logical Operator
    



    return 0;
}