#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

const int size = 3;

class item
{
private:
    char name[25];
    float rate, amount;
    int qty;

public:
    void getdata()
    {
        cout << "Enter item name := ";
        cin >> name;
        cout << "Enter Quantity := ";
        cin >> qty;
        cout << "Enter item rate := ";
        cin >> rate;
        cout << " ----------------------------- " << endl;
    }

    void printdata()
    {
        cout << setw(7) << name;
        cout << setw(8) << qty;
        cout << setw(8) << rate;
        amount = rate * qty;
        cout << setw(8) << amount << endl;
    }
};

int main()
{
    int i;
    item shop[size];
    for (i = 0; i < size; i++)
        shop[i].getdata();
    cout << "\n\n\n Details of Shopping List\n\n";
    cout << " Name Qty Rate Amount" << endl;
    cout << " ------------------------------------- " << endl;
    for (i = 0; i < size; i++)
        shop[i].printdata();
    cout << " ------------------------------------- " << endl;
    return 0;
}