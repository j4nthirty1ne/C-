#include <iostream> 
#include <string> 
using namespace std;

class Teacher
{
    private:
        string name;
        int age;
        string email;
    public:
        Teacher(string name, int age, string email) : name(name), age(age), email(email) {}
    void teacherInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
    }
};

int main ()
{
    system ("cls");
    Teacher teacher("Jork", 82, "Jork@example.com");
    teacher.teacherInfo();

    return 0;
}