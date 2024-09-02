#include <iostream>
#include <string>
using namespace std;

class Engine 
{
    public:
        void speedup()
        {
            cout << "speed up..." << endl;
        }

        void slowdown()
        {
            cout << "slow down..." << endl;
        }

};
class Car : public Engine
{
    private: 
        int id;
        string brand;
        int releaseYear;
    
    public:
        Car(int id, string brand, int releaseYear)
        {
            this -> id = id;
            this -> brand = brand;
            this -> releaseYear = releaseYear;
        }

        void getDetails()
        {
            cout << "ID: " << id << endl;
            cout << "Brand: " << brand << endl;
            cout << "Release Year: " << releaseYear << endl;
        }

};
class Vehicle: public Engine
    {

    };
int main()
{
    system("cls");
    Car bwm(1, "BMW", 2024);
    bwm.getDetails();
    bwm.speedup();
    bwm.slowdown();

    Vehicle v;
    v.speedup();
    v.slowdown();
    return 0;

}