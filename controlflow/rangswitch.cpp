#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    cout <<"Enter your score: ";
    int score; 
    cin >> score; 

    switch (score)
    {
        case 90 ... 100:
            cout << "Grade A";
            break;
        case 80 ... 89:
            cout << "Grade B";
            break;
        case 70 ... 79:
            cout << "Grade C";
            break;
        case 60 ... 69:
            cout << "Grade D";
            break;
        default:
            cout << "Fail!";
    }


    return 0;
}