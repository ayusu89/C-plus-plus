#include <iostream>
using namespace std;

class A;
class B;

class A
{
private:
    int a;

public:
    void input(int x)
    {
        a = x;
    }

    friend void max(A, B);
};

class B
{
private:
    int b;

public:
    void input(int y)
    {
        b = y;
    }

    friend void max(A, B);
};

void max(A x, B y)
{
    if (x.a > y.b)
    {
       cout << "Maximum number is: " << x.a;
    }
        
    else
    {
        cout<<"Maximum number is :"<<y.b;
    }
        
}

int main()
{
    A obj1;
    B obj2;

    obj1.input(10);
    obj2.input(20);

    max(obj1, obj2);

    return 0;
}