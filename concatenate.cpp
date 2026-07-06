#include<iostream>
#include<string>
using namespace std;

class Address
{
private:
    string address;

public:
    Address(string a)
    {
        address = a;
    }

    string getAddress()
    {
        return address;
    }
};

class Person
{
private:
    string name;
    Address addr;     // Containership

public:
    Person(string n, string a) : addr(a)
    {
        name = n;
    }

    void showData()
    {
        cout<<"Name    : "<<name<<endl;
        cout<<"Address : "<<addr.getAddress()<<endl;

        cout<<"\nConcatenated String:\n";
        cout<<name<<" "<<addr.getAddress()<<endl;
    }
};

int main()
{
    Person p("Ayusa Paudel","Pokhara, Nepal");

    p.showData();

    return 0;
}