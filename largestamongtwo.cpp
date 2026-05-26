#include<iostream>
using namespace std ;
int main ()
{
    int num1 ,num2 ;
    cout<<"Enter two numbers " <<endl;
    cin>>num1>>num2;
    if(num1 > num2 )
    {
        cout<<"Largest number is :"<<num1<<endl;
    }
    else 
    {
        cout<<"Largest number is :"<<num2<<endl;
    }
  return 0;
}