// for unary minus operator
// through friend function 

#include <iostream>
using namespace std;

class Minus
{
private:
    int x, y, z;

public:

    // Taking input
    void input(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    // Unary minus operator overloading
   friend  void operator-( Minus &m)

    {
        m.x = - m.x;
        m.y = -m.y;
        m.z = -m.z;
    }

    // Display
    void display()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

int main()
{
    Minus m;

    m.input(10, 20, 30);

    -m;             // Calls operator-()

    m.display();

    return 0;
}
    