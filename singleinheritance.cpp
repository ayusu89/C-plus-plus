#include <iostream>
using namespace std;

class Animal
{
public:
    string name;

    Animal(string n)
    {
        name = n;
    }
};

class Dog : public Animal
{
public:
    Dog(string n) : Animal(n)   // Call base class constructor
    {
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Dog d("Tommy");
    d.display();

    return 0;
}