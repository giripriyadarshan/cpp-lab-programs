#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class CLOCK
{
    int hr, min;

public:
    void gettime(int hh, int mm)
    {
        hr = hh;
        min = mm;
    }
    void showtime()
    {
        cout << hr << " hours and " << min << " minutes" << endl;
    }
    CLOCK operator+(CLOCK t)
    {
        int i1;
        CLOCK temp;
        temp.min = (min + t.min) % 60;
        i1 = (hr + t.hr);
        if ((min + t.min) >= 60)
            i1++;
        temp.hr = i1;
        return temp;
    }
};
int main()
{
    CLOCK t1, t2, t3;
    t1.gettime(1, 25);
    t2.gettime(3, 50);
    t3 = t1 + t2;
    cout << endl
         << "Time 1 :";
    t1.showtime();
    cout << endl
         << "Time 2 :";
    t2.showtime();
    cout << endl
         << "Total Duration :";
    t3.showtime();
    return 0;
}