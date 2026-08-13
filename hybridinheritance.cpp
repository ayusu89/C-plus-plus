#include <iostream>
using namespace std;

class Person
{
public:
    void show()
    {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person
{
public:
    void Student()
    {
        cout << "I am a Student." << endl;
    }
};

class Teacher : public Person
{
public:
    void Teacher()
    {
        cout << "I am a Teacher." << endl;
    }
};

class TeachingAssistant : public Student, public Teacher
{
public:
    void showTA()
    {
        cout << "I am a Teaching Assistant." << endl;
    }
};

int main()
{
    TeachingAssistant obj;

    obj.Student::showPerson();   // Access Person through Student
    obj.showStudent();
    obj.showTeacher();
    obj.showTA();

    return 0;
}