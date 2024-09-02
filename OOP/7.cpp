#include<iostream>
#include<string>

using namespace std;

int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
    }
}

int main(){
    cout<< "Factorial of 5: " << factorial(5)<<endl;
    return 0;
}
