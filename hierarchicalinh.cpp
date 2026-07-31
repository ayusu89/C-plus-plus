// hierarchical inheritiance 
// one parent have multiple child classes
#include<iostream>
using namespace std;
class animal
{
    public :
    void hungry()
    {
        cout<<"Animal is hungry "<<endl;
    }
};
class lion : public animal
{
    public :
    void roar()
    {
        cout<<"LION ROAR";
    }
};
class dog : public animal
{
    public :
    void barks ()
    {
        cout<<"DOG BARKS "<<endl;
    }
};
int main ()
{
    dog d;
    lion l ;
    d.barks();
    d.hungry();
    l.roar();
    l.hungry();
    return 0 ; 
}