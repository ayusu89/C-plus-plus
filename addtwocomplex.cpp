#include <iostream>
using namespace std;

class B;      // Forward declaration
class Result; // Forward declaration

class A
{
private:
    int real1, imag1;

public:
    void input()
    {
        cout << "Enter first complex number (real imaginary): ";
        cin >> real1 >> imag1;
    }

    friend Result add(A, B);
};

class B
{
private:
    int real2, imag2;

public:
    void input()
    {
        cout << "Enter second complex number (real imaginary): ";
        cin >> real2 >> imag2;
    }

    friend Result add(A, B);
};

class Result
{
private:
    int real, imag;

public:
    void display()
    {
        cout << "Sum = " << real;
        if (imag >= 0)
        {
           cout << " + " << imag << "i";
        }
           
        else
        {
            cout << " - " << imag << "i";
        }
            
        cout << endl;
    }

    friend Result add(A, B);
};

// Friend Function
Result add(A x, B y)
{
    Result temp;
    temp.real = x.real1 + y.real2;
    temp.imag = x.imag1 + y.imag2;
    return temp;
}

int main()
{
    A obj1;
    B obj2;
    Result obj3;

    obj1.input();
    obj2.input();

    obj3 = add(obj1, obj2);

    obj3.display();

    return 0;
}