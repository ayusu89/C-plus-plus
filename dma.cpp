#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int ;
    *ptr = 100;
    cout <<"Value = "  << * ptr << endl;
    delete ptr;
    return 0;
}