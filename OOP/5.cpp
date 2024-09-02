#include <iostream>
#include <vector>
using namespace std; 

class Animals
{
    private:
        string name;

    public:
    Animals() 
    {
        cout << "Hello Animals" << endl;
    }

    Animals(string name) 
    {
        this -> name = name;
    }

    ~Animals() // decontructor
    {
        cout << "Goodbye animal"<< endl;
    }

};
int main ()
{   
    Animals animal;
    Animals dog("Dog");
    Animals cat("Cat");
    return 0;
}