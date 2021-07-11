#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

class current;
class saving
{
    char name[15];
    int accno;
    float balance;

public:
    void getdata()
    {
        cout << "\n Savings account details \n";
        cout << "\n Name: ";
        cin >> name;
        cout << "\n Account number: ";
        cin >> accno;
        cout << "\n Balance: ";
        cin >> balance;
    }
    friend float totbalance(saving, current);
};

class current
{
    char name[15];
    int accno;
    float balance;

public:
    void getdata()
    {
        cout << "\n Current account details \n";
        cout << "\n Name: ";
        cin >> name;
        cout << "\n Account number: ";
        cin >> accno;
        cout << "\n Balance: ";
        cin >> balance;
    }
    friend float totbalance(saving, current);
};

float totbalance(saving s, current c)
{
    cout << "\n Saving's Account Balance = Rs" << s.balance << endl;
    cout << "\n Current Account Balance = Rs" << c.balance << endl;
    return (s.balance + c.balance);
}
int main()
{
    saving s;
    current c;

    s.getdata();
    c.getdata();
    cout << "\nTotal Balance       Rs" << setw(6) << totbalance(s, c) << endl;
    return 0;
}