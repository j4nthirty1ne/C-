#include <iostream> 
using namespace std;

class Persons
{
    public:
        string name;
        char sex;
        int age;
        string email;

        void inputInfo (string name, char sex, int age, string email)
        {
            cout << "Please enter your name: "; cin >> name; 
            cout << "Please enter your sex (M/F): "; cin >> sex;
            cout << "Please enter your age: "; cin >> age;
            cout << "Please enter your email: "; cin >> email;
        }

};

int main ()
{
    system ("cls");

    Persons person1;
    Persons.inputInfo (string name, char sex, int age, string email);

    return 0;
}