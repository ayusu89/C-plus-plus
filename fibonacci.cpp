// for fibonacci series 

#include <iostream>
using namespace std;

class Fibonacci
{
private:
    int a, b, c;

public:

// initialization 

    void input()
    {
        a = 0;
        b = 1;
    }
 // operator overloaded
 
    void operator++()
    {
        c = a + b;
        a = b;
        b = c;
    }

    void display()
    {
        cout << a << " ";
    }
};

int main()
{
    Fibonacci f;

    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    f.input();

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; i++)
    {
        f.display();
        ++f;
    }

    return 0;
}