#include<iostream>
using namespace std ;
class complex
{
    private :
    int real ;
    int imag ;
    public :
    complex ()
    {

    }
     complex (int r , int i )
     {
        real = r ;
        imag = i ;
     }
     void display()
     {
        cout<<real<<"+i"<<imag<<endl;
     }
     complex operator +( complex c2)
     {
        complex temp;
        temp.real =  real + c2.real;
        temp.imag = imag  + c2.imag;
        return temp;
        
     }
};
int main ()
{
    complex c1 (2 , 3);
    complex c2 (4 , 5);
    
    cout << "c1 = ";
    c1.display();
    cout<<"c2 = ";
    c2.display();
    complex c3 ;

    c3 = c1 + c2 ; // calls operator overloading

    cout<<"c3 = ";

    c3.display();
    return 0;
}