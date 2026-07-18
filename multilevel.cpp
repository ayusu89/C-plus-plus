class Person
 {
public:
    string name;
    int age;
};

class Student : public Person 
{
    int rollNo;
    // Inherits name, age even if not always needed
};
