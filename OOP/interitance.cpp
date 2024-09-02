#include <iostream>

using namespace std;
class Person{
    public:
        int id;
        string name;
        int age;

        void getDetails(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age <<endl;
            cout << "=======================" << endl;
        }
};
class Student : public Person{

};
class Teacher : public Person{

};
class Stuff : public Person{

};

int main(){
    system("cls");
    Student s;
    Teacher t;
    Stuff st;
    s.id =  1;
    s.name = "Joy";
    s.age = 12;
    s.getDetails();
    t.id = 1;
    t.name = "Jork";
    t.age = 22;
    t.getDetails();
    st.id = 1;
    st.name = "Jing";
    st.age = 23;
    st.getDetails();


    return 0;
}
