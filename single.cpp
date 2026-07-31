#include<iostream>
using namespace std;
class Animal
{
    public :
    void eat ()
    {
        cout<<"Animal eating"<<endl;
    }
};
class Dog : public Animal 
{
    public :
    void barks()
    {
        cout<<"Dog Barking "<<endl;
    }
};
int main()
{

    Dog d;
    d.eat();
    d.barks();
    return 0 ; 
}