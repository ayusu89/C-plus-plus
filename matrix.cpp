#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    void input()
    {
        cout << "Enter 9 elements:\n";

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Binary operator +
    Matrix operator +(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter elements of first matrix:\n";
    m1.input();

    cout << "Enter elements of second matrix:\n";
    m2.input();

    // Calling overloaded + operator
    m3 = m1 + m2;

    cout << "\nFirst Matrix:\n";
    m1.display();

    cout << "\nSecond Matrix:\n";
    m2.display();

    cout << "\nSum of two matrices:\n";
    m3.display();

    return 0;
}