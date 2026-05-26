#include<iostream>
using namespace std;
struct student
{
    int id;
    string name;
    float marks;
    void display()
    {
        cout<<"Name of student :"<<name<<endl;
        cout<<"Marks of the student :"<<marks<<endl;
        cout<<"ID of the student :"<<id<<endl;
    }
};
int main()
{
    student s;
    // Get input from the user
    cout<<"Enter the name of the student :"<<endl;
    cin>>s.name;

    cout<<"Enter the marks of the student :"<<endl;
    cin>>s.marks;

    cout<<"Enter the id of the student :"<<endl;
    cin>>s.id;

    s.display(); //calling function
    return 0;
    // MY name is ayusa paudel
}