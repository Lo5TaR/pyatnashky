#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Auto
{
public:
    Auto()
    {
        name = "not definded";
        wheelCount = 0;
    }
    Auto(int wheels)
    {
        wheelCount = wheels;
    }
    Auto(string carName, int wheels)
    {
        name = carName;
        wheelCount = wheels;
    }
    string name;
    int wheelCount;
    float fuelLevel = 100;
    void go() {
        fuelLevel -= 1;
    }
    void stop() {
    
    }
    void printInfo() {
    
    }
    

};

class Unit
{
public:
    Unit() {

    }
    Unit(int type) {
        switchType(type);
    }
    Unit(int type, int age) {
        switchType(type);
        Age = age;
    }
    string Type;
    int Age = rand()%100+10;
    int level = 0;
    string name;
    //int passedKM;
    void punch() {
        health -= rand() % 10 + 1;
    }
    void printInfo() {

    }
    int unitAlive(int Health) {
        if (Health < 0)
            return 0;
        else
            return 1;
    }
    int Go() {

    }

private:
    int health = 100;
    void switchType(int type)
    {
        switch (type)
        {
        case 1:
            Type = "Elf";
            break;
        case 2:
            Type = "Human";
            break;
        case 3:
            Type = "Goblin";
            break;
        case 4:
            Type = "Gnom";
            break;
        case 5:
            Type = "Orc";
            health = 90;
            break;
        default:
            break;
        }
    }
};


int main()
{
    srand(time(NULL));
    /*int wheels;
    cin >> wheels;
    Auto a(wheels);
    cout << a.wheelCount;*/




    return 0;
}