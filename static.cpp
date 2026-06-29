// C++ Program to demonstrate static data members
#include <iostream>
using namespace std;

// class definition
class A 
{
public:
    static int x;  // static data member
    A() 
    {
        cout << "A's constructor called" << endl;
    }
};

// definition and initialization of static data member
int A::x = 2;

int main() 
{
    // accessing static data member using scope resolution operator
    cout << "Accessing static data member: " << A::x << endl;
    return 0;
}