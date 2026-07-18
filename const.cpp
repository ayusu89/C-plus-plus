// use of constructor and destructor 
#include<iostream>
using namespace std;
class student 
{
    private :
    string name;
    int roll;

// constructor created 
public :

student ()
{
    name = "Ayusa";
    roll = 15;
}
public :

void display()
{
    cout <<"NAME :"<<name<<endl;
    cout<<"ROLL_NUMBER :"<<roll<<endl;
}
// destructor called 

~student ()
{
    
}


};

int main()
{
    student s ;
    s.display();
    return 0;
}