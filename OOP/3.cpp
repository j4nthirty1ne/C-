#include <iostream>
#include <vector>
using namespace std;

class Persons
{
    public:
        string name;
        char sex;
        int age;
        string email;

        void inputInfo()
        {
            cout << "Please enter your name: "; 
            cin >> name; 
            cout << "Please enter your sex (M/F): "; 
            cin >> sex;
            cout << "Please enter your age: "; 
            cin >> age;
            cout << "Please enter your email: "; 
            cin >> email;
        }

        void displayInfo() 
        {
            cout << "Name: " << name << endl;
            cout << "Sex: " << sex << endl;
            cout << "Age: " << age << endl;
            cout << "Email: " << email << endl;
        }
};

int main()
{
    system("cls");

    int numberOfPersons;
    cout << "How many persons would you like to enter? ";
    cin >> numberOfPersons;

    vector<Persons> person(numberOfPersons); 

    for (int i = 0; i < numberOfPersons; i++)
    {
        cout << "\nPerson " << (i + 1) << ":" << endl;
        person[i].inputInfo();
    }

    for (int i = 0; i < numberOfPersons; i++)
    {
        cout << "\nInformation for Person " << (i + 1) << ":" << endl;
        person[i].displayInfo();
    }

    return 0;
}
