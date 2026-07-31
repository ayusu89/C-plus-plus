// two or more parent have a single child 
#include<iostream>
using namespace std;
class Animal
{
    public :
    void eat()
    {
        cout<<"Animal Eating"<<endl;
    }
};
class Pet
{
    public :
    void sleep()
    {
        cout<<"Pet Sleeping"<<endl;
    }
};
class Dog : public Animal , public Pet 
{
   public:
   void barks()
   {
    cout<<"Dog Barks"<<endl;
   }
};
int main()
{
    Dog d;
    d.eat();
    d.sleep();
    d.barks();
    return 0;
}