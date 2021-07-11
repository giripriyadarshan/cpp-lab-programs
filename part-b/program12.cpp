#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define pi 3.1412
inline float circum(float r)
{
    return (2 * pi * r);
}
inline float area(float r)
{
    return (pi * r * r);
}
int main()
{
    float rad;
    cout << "enter radius " << endl;
    cin >> rad;
    cout << "circumference =" << circum(rad);
    cout << "\n Area is =" << area(rad);
    return 0;
}