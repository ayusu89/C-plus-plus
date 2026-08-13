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

    friend Num operator--(Num &obj);

    void display()
    {
        cout << n << endl;
    }
};

// Friend function definition
Num operator--(Num &obj)
{

     --obj.n;
    return obj;


}

int main()
{
    Num obj;

    obj.input(10);

    cout << "Before Decrement :" << endl;
    obj.display();

     --obj;

    cout << "After Decrement :" << endl;
    obj.display();

    

    return 0;
}