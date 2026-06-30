#include <iostream>
using namespace std;
class Number
 {
   int* data;
   public:
   // Parameterized dynamic constructor
   Number(int x)
     {
       data = new int(x); // Allocate memory dynamically
     }
   void display() 
     {
       cout << "DATA : " << *data<< endl;
     }
   ~Number() 
    {
       delete data; // Free allocated memory
    }
};
int main() 
{
   Number num(42); // Dynamically initialize with value 42
   num.display(); // Output: Value: 42
   return 0;
}