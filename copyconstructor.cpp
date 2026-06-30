#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) 
    {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &obj)
     {
        name = obj.name; // Copy name
        age = obj.age;   // Copy age
        cout << "Copy constructor called!" << endl;
     }

    // Function to display student details
       void display() 
        {
        cout << "Name: " << name << ", Age: " << age << endl;
       }
};

int main()
 {
    // Create first object
    Student s1("Alice", 20);
    cout << "Original object: ";
    s1.display();

    // Create second object using copy constructor
    Student s2 = s1; // Copy constructor is invoked here
    cout << "Copied object: ";
    s2.display();

    return 0;
}