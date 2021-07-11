#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

class RECT
{
protected:
    float length, width;

public:
    RECT()
    {
        length = 0.0;
        width = 0.0;
    }
};

class AREA : public RECT //AREA is derived from RECT
{
public:
    void read()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    float calArea()
    {
        return length * width;
    }
};

class PERI : public RECT //PERI is derived from RECT
{
public:
    void read()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    float calPeri()
    {
        return (2 * (length + width));
    }
};

int main()
{

    AREA a;
    PERI p;
    a.read();
    cout << "Area of Rectangle is " << setw(5) << a.calArea();
    cout << endl;
    p.read();
    cout << " \n Perimeter of Rectangle is" << setw(5) << p.calPeri();
    return 0;
}