#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int age;
    string nationality;
    cout <<"=====|Register driver|=====" << endl;
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your nationality: ";
    cin >> nationality;

    bool condition1 = (age >= 18);
    bool condition2 =! (nationality == "khmer" || nationality == "Khmer" || nationality == "KH");
    
    if (condition1 && condition2)
    {
        cout << "Congratulation, You can drive";
    }
    else 
    {
        cout << "Sorry, You cannot drive";
    }
    return 0;
}