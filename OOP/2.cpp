#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
      int age;
      string name;
      string email;
    public:
      void setData(int age, string name, string email){
        this->age = age;
        this->name = name;
        this->email = email;
      }
      void displayData(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
      }
};

int main(){
  int n;
  cout<<"Insert number of people: ";cin>>n;
  for(int i=0; i<n; i++){
    Person p;
    string name, email;
    int age;
    cout<<"Insert name: ";cin>>name;
    cout<<"Insert age: ";cin>>age;
    cout<<"Insert email: ";cin>>email;
    
    p.setData(age, name, email);
    p.displayData();
    cout << endl;
  }
  return 0;
}
