#include <iostream>
using namespace std;

class Complex
{
public :
    int real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real;
        if (imag >= 0)
            cout <<  " + " << imag << "i";
        else
            cout <<  " - " << -imag << "i";
        cout << endl;
    }
};

// Function passing objects by reference
Complex add(Complex &c1, Complex &c2)
{
    Complex temp;
    
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:"<<endl;
    c1.input();

    cout << "Enter second complex number:"<<endl;
    c2.input();

    c3 = add(c1, c2);

    cout << "First Complex Number: "<<endl;;
    c1.display();

    cout << "Second Complex Number: "<<endl;;
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}