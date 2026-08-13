#include<iostream>
using namespace std;
class Num
{
    private :
    int n ;
    public :
    void input (int x)
    {
        n = x;
    }
    void operator ++ ()
    {
        n = ++n;
    }
    void display()
    {

        cout << n<<endl;
    }
};
int main()
{
    Num obj;
    obj.input(10);
    obj.display();
    ++obj;
    cout<<"After preincrement : "<<endl;
    obj.display();
    return 0;
}