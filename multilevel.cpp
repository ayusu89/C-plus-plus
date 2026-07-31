// multi-level inheritance 

#include<iostream>
using namespace std ;
class Animal
{
    public :
    void eat ()
    {
        cout<<"ANIMAL EATING"<<endl;
    }
};
class Dog : public Animal
{
    public:
    void sleep ()
    {
        cout<<"Dog Sleep "<<endl;
    }
};
class Tommy : public Dog 
{
    public :
    void barks ()
    {
        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    Tommy t;
    t.eat();
    t.sleep();
    t.barks();
    return 0 ;
}