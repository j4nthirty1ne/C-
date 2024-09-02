#include <iostream>
using namespace std;

int main ()
{
    system ("cls");

    float marks [5];
    marks [0] = 90.5;
    marks [1] = 85.2;
    marks [2] = 88.7;
    marks [3] = 92.3;
    marks [4] = 87.6;

    cout << "size o marks array: " << sizeof(marks) << endl;
    cout << "address of marks array: " << &marks << endl;
    cout << "address of marks[0]: " << &marks[0] << endl;
    cout << "address of marks[1]: " << &marks[1] << endl;
    cout << "address of marks[2]: " << &marks[2] << endl;
    cout << "address of marks[3]: " << &marks[3] << endl;
    cout << "address of marks[4]: " << &marks[4] << endl;

    cout <<"2nd element of marks array: " << *(marks + 3) << endl;
    return 0;

}