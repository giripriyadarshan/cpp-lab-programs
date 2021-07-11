#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <class T>
T LARGE(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}

int main()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout << "Enter two integers:\n";
    cin >> i1 >> i2;
    cout << LARGE(i1, i2) << " is larger." << endl;
    cout << "\nEnter two floating-point numbers:\n";
    cin >> f1 >> f2;
    cout << LARGE(f1, f2) << " is larger." << endl;
    cout << "\nEnter two characters:\n";
    cin >> c1 >> c2;
    cout << LARGE(c1, c2) << " has larger ASCII value.";
    return 0;
}