#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class max
{
private:
    int x;
    int y;

public:
    void getdata()
    {
        cout << endl
             << "Enter a number";
        cin >> x;
        cout << endl
             << "Enter another number";
        cin >> y;
    }

    void showdata()
    {
        cout << endl
             << "x is" << x;
        cout << endl
             << "y is" << y;
    }

    friend int large(max m);
};

int large(max m)
{
    if (m.x > m.y)
        return m.x;
    else
        return m.y;
}

int main()
{
    max m;
    m.getdata();
    m.showdata();
    cout << endl
         << "Largest is" << large(m);
    return 0;
}