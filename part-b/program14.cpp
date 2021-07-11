#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class dist
{
    int feet;
    float inches;

public:
    dist()
    {
        //default constructor
        feet = 0;
        inches = 0.0;
    }
    dist(int ft, float in) //parameterized
    {
        feet = ft;
        inches = in;
    }
    void showdist()
    {
        cout << feet << "'"
             << " - " << inches << "''"
             << "\n";
    }
    void sumdist(dist d1, dist d2)
    {
        int i1, i2;
        i1 = d1.inches;
        i2 = d2.inches;
        inches = (i1 + i2) % 12;
        feet = d1.feet + d2.feet + (d1.inches + d2.inches) / 12;
    }
};
int main()
{
    dist d3;
    dist d1(3, 14);
    dist d2(12, 9); //paramterized
    d3.sumdist(d1, d2);
    cout << "\n d1 = ";
    d1.showdist();
    cout << "\n d2 = ";
    d2.showdist();
    cout << "\n d3 = ";
    d3.showdist();
    return 0;
}