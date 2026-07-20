#include <iostream>
using namespace std;
class Person 
{
private:
   int age;
public:
   // Constructor with no arguments
   Person()
    {
       age = 20;
   }
   // Constructor with one argument
   Person(int a) 
   {
       age = a;
   }
   int getAge() 
   {
       return age;
   }
};
int main() 
{
   Person person1, person2(45);
   cout << "Person1 Age = " << person1.getAge() << endl;
   cout << "Person2 Age = " << person2.getAge() << endl;
   return 0;
}