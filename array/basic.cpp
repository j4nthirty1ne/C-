#include <iostream>

using namespace std;
int main ()
{
    system ("cls");
    // declare array
    float marks[5];
    marks [0] = 90.5;
    marks [1] = 85.2;
    marks [2] = 78.9;
    marks [3] = 92.3;
    marks [4] = 87.6;

    string names [5] = { "Jan", "June", "Jade", "Jay", "Jork"};

    for (int i = 0; i < 5; i++)
    {
        cout << "Name: " << names[i] << endl;
        cout << "Marks: " << marks[i] << endl;
        cout <<"========"<< endl;
    }
    // cout << "Name: " << names[0] << endl;
    // cout << "Marks: " << marks[0] << endl;
    return 0;
}