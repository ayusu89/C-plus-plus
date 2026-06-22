#include <iostream>
using namespace std;

class B;
class C;

// Class A
class A
{
private:
    int a;

public:
    void input()
    {
        cout << "Enter value of A: ";
        cin >> a;
    }

    friend void add(A, B, C);
};

// Class B
class B
{
private:
    int b;

public:
    void input()
    {
        cout << "Enter value of B: ";
        cin >> b;
    }

    friend void add(A, B, C);
};

// Class C
class C
{
private:
    int c;

public:
    void input()
    {
        cout << "Enter value of C: ";
        cin >> c;
    }

    friend void add(A, B, C);
};

// Friend Function
void add(A x, B y, C z)
{
    int sum;
    sum = x.a + y.b + z.c;

    cout << "Sum = " << sum << endl;
}

int main()
{
    A obj1;
    B obj2;
    C obj3;

    obj1.input();
    obj2.input();
    obj3.input();

    add(obj1, obj2, obj3);

    return 0;
}