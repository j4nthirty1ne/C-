#include <iostream>
using namespace std;

int  sum (int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += 1;
    }
    return sum;
}

int factorail (int n)
{
    cout << n << "!= ";
    int factorail = 1;
    for (int i = n; i >= 1; i--)
    {
        factorail *= i;
        cout << i << " ";
        if (i == 1) 
        {
            cout << "= " << factorail;
        }
        else 
        {
            cout << "*";
        }
    }
}
int main ()
{
    system ("cls");

    factorail(5);
    return 0;
}
