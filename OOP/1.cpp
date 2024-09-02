#include <iostream>
using namespace std;

class Utils 
{
    public:
        int a;

        void sum(int x, int y)
        {
            a = x + y;
            cout << "Sum of " << x << " and " << y << " is: " << a << endl;
        }

        void subtract(int x, int y)
        {
            a = x - y;
            cout << "Difference of " << x << " and " << y << " is: " << a << endl;
        }
        void divide(int x, int y)
        {
            a = x / y;
            cout << "Quotient of " << x << " and " << y << " is: " << a << endl;
        }
};

int main (void)
{
    // system ("cls");
    // // Directly initialize
    // Utils obj1;
    // obj.sum(10,30);
    // obj.subtract(50,20);
    // obj.divide(100,20);

    // // dynamically initialize 
    Utils *obj = new Utils;
    obj -> sum (10,5);
    return 0;

    return 0;
}