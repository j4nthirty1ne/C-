#include <iostream>
using namespace std;

// void test (int *p)
// {
//     *p++;
// }
// void test (int  &p)
// {
//     p++;
// }

void sum (int x, int y)
    {
        int sum = x+y;
        cout << "Sum = " << sum << endl;
    }

void sum (double x, double y)
{
    double sum = x+y;
    cout << "Sum = " << sum << endl;
}

void divide (int x, int y)
{
    float divide = x / y;
    cout << "Division = " << divide << endl;
}

void divide (double x, double y)
{
    double divide = x / y;
    cout << "Division = " << divide << endl;
}

void multiply (int x, int y)
{
    int multiply = x * y;
    cout << "Multiplication = " << multiply << endl;
}

void multiply (double x, double y)
{
    double multiply = x * y;
    cout << "Multiplication = " << multiply << endl;
}
int main ()
{   
    system ("cls");
    sum (10, -20);
    sum (-10.5, 20.5);
    divide (10, 3);
    divide (10, 3);
    multiply (10, 2);
    multiply (-10.5, 2.5);

    return 0;
}