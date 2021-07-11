#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Matrix
{
    int a[3][3];

public:
    void accept();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    cout << "Enter Matrix Element (3 X 3) \n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << " ";
            cin >> a[i][j];
        }
}
void Matrix::operator+(Matrix x)
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mat[i][j] = a[i][j] + x.a[i][j];
    cout << "\n Addition of Matrix : \n\n";
    for (int i = 0; i < 3; i++)
    {
        cout << " ";

        for (int j = 0; j < 3; j++)
            cout << mat[i][j] << "\t";

        cout << "\n";
    }
}
int main()
{
    Matrix m, n;
    m.accept();
    n.accept();

    m + n;
    // Addition of Two Matrices. Overloaded '+' Operator
    return 0;
}