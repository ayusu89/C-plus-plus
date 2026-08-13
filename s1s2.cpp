 
 #include<iostream>
using namespace std;

class Space
{
    int x, y, z;

public:
    Space(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }

    friend Space operator-(Space s);
};

Space operator-(Space s)
{
    Space temp(0, 0, 0);

    temp.x = -s.x;
    temp.y = -s.y;
    temp.z = -s.z;

    return temp;
}

int main()
{
    Space s1(10, 20, 30);
    Space s2(0, 0, 0);

    cout << "Coordinates of s1:" << endl;
    s1.display();

    s2 = -s1;

    cout << "\nCoordinates of s2 after -s1:" << endl;
    s2.display();

    return 0;
}

