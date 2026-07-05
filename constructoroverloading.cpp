#include<iostream>
using namespace std ;
class student 
{
    public:

    int roll;
    public:

    student()
    {
        roll = 1;
    }
public :
    student (int r)
    {
        roll = r ;
    }
    void display()
    {
        cout<<"ROLL = "<<roll<<endl;
    }
};
int main()
{
    student s1;
    student s2(11);
    s1.display();
    s2.display();
    return 0;
}