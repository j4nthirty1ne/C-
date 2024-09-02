#include <iostream>
using namespace std;

int main ()
{
    system ("cls");
    // int age = 18;
    // float salary = 555.55;
    // string name = "Jork";
    // char sex = 'F';
    // cout << "age: " << age << endl;
    // cout << "salary: " << salary << endl;
    // cout << "name: " << name << endl;
    // cout << "sex: " << sex << endl;

    // Input and Output
    int age; 
    string name;
    float salary;
    
    cout << "Please enter ya age: " ;
    cin >> age;

    cout << "Please enter ya name: ";
    //getline(cin, name);
    cin.ignore();
    getline(cin, name);

    cout << "Please enter ya salary: ";
    cin >> salary;
    
    cout << "Ya name is: " << name << endl;
    cout << "Ya age is: " << age << endl;
    cout << "Ya salary is: " << salary << endl;

    return 0;
}