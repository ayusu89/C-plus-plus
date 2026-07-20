#include <iostream>
using namespace std;

class student
{
    string * name;
public:
    // default constructor
    student()
    {

        // allocating memory at run time
        name= new string [6];
        name = "ayusa";
    }

    void display() 
    { 
        cout << name<< endl;
     }
};

int main()
{
    student obj;
    obj.display();
}