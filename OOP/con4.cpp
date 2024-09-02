#include <iostream>
using namespace std;
class Pet
{
    public:
        int id;
        string name;
        string color;
        string type;
        
        Pet (int id, string name, string color, string type)
        : id(id), name(name), color(color), type(type){};
        
        Pet()
        {

        }

        
        void getPetDetial ()
        {
            cout << "ID: " << id <<endl;
            cout << "name: " << name <<endl;
            cout << "Color: " << color <<endl;
            cout << "Type: " << type <<endl;
        }
        
};

int main(){
    system("cls");
    Pet pet1(1, "Jenny", "Brown", "Dog");
    pet1.getPetDetial();
    
    return 0;
}
