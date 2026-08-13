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

    friend Num operator++(Num &obj);

    void display()
    {
        cout << n << endl;
    }
};

// Friend function definition
Num operator++(Num &obj)
{

    obj.n = ++obj.n;
    return obj;


}

int main()
{
    Num obj;

    obj.input(10);

    cout << "Before Increment :" << endl;
    obj.display();

     ++obj;

    cout << "After Preincrement :" << endl;
    obj.display();

    

    return 0;
}