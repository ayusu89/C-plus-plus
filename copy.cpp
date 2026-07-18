#include<iostream>
using namespace std ;
class Number 
{
    private:

    int num1;
    int num2;

    public :
    Number ()
    {
        num1 = 10;
        num2 = 20;
    }
    Number (const Number &n) // copy constructor
    {
        num1 = n.num1;
        num2 = n.num2;
    }
    void display ()
    {
        cout<<"Number first :"<<num1 <<endl;
        cout<<"Number second :"<<num2<<endl;
    }
};
int main()
{
    Number n1;
    Number n2 = n1;
    n2.display();
    return 0;
}