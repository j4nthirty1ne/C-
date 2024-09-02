#include <iostream>
using namespace std;

struct Students
{
    string name;
    int age;
    char sex;
    string email;

    void StudentInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << (sex == 'M'? "Male" : "Female") << endl;
        cout << "Email: " << email << endl << endl;
    }
};

int main ()
{
    // system("cls");
    // Students student1;
    // student1.name = "John ";
    // student1.age = 18;
    // student1.sex = 'M';
    // student1.email = "john@gmail.com";
    // student1.StudentInfo();

    // Students student2;
    // student2.name = "Jane ";
    // student2.age = 20;
    // student2.sex = 'F';
    // student2.email = "jane@gmail.com";
    // student2.StudentInfo();

    
    Students student1;
    cout << "Enter student 1's details: ";
    cout << "Name: "; cin >> student1.name;
    cout << "Age: "; cin >> student1.age;
    cout << "sex: "; cin >> student1.sex;
    cout << "email: "; cin >> student1.email ;
    student1.StudentInfo();

    Students student2;
    cout << "Enter student 2's details: ";
    cout << "Name: "; cin >> student2.name;
    cout << "Age: "; cin >> student2.age;
    cout << "sex: "; cin >> student2.sex;
    cout << "email: "; cin >> student2.email ;
    student1.StudentInfo();

    
    return 0;
}
