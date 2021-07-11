#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

class string
{

private:
    char str[40];

public:
    void show()
    {
        cout << str;
    }
    void getdata()
    {
        cin >> str;
    }
    friend int operator==(string, string);
};
int operator==(string t1, string t2)
{
    if (strcmp(t1.str, t2.str) == 0)
        return 1;
    else
        return 0;
}
int main()
{
    string s1, s2, s3;
    cout << "\nEnter the first string: ";
    s1.getdata();
    cout << "\nEnter the second string: ";
    s2.getdata();
    cout << "\nString1: ";
    s1.show();
    cout << "\nString2: ";
    s2.show();
    if (s1 == s2)
        cout << "\nStrings are equal." << endl;
    else
        cout << "\nStrings are unequal." << endl;
    return 0;
}