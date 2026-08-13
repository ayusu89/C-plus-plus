#include <iostream>
using namespace std;

class Num
{
private:
    int n;

public:
    void input(int x)
    {
        n = x;
    }

    void operator--()
    {
        --n;
    }

    void display()
    {
        cout << n << endl;
    }
};

int main()
{
    Num obj;

    obj.input(10);

    cout << "Before Decrement:" << endl;
    obj.display();

    --obj;

    cout << "After Decrement :" << endl;
    obj.display();

    return 0;
}