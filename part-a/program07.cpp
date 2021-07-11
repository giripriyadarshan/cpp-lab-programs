#include <iostream>
#include <iomanip>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

class STUDENT
{
protected:
    int regno;
    int age;
    char name[20];

public:
    void read()
    {
        cout << "Enter Register Number,name and age " << endl;
        cin >> regno;
        cin >> name;
        cin >> age;
    }
};
class MARKS
{
protected:
    int m1, m2, m3;
    float perc;
    char result[10];

public:
    void readmarks()
    {
        cout << "\nMarks in C++ : ";
        cin >> m1;
        cout << "\nMarks in OS : ";
        cin >> m2;
        cout << "\nMarks in FAM : ";
        cin >> m3;
        perc = (m1 + m2 + m3) / 300.0 * 100;
        if (m1 < 40 || m2 < 40 || m3 < 40)
            strcpy(result, "fail");
        else
            strcpy(result, "pass");
    }
};
class SPORTS : public STUDENT, public MARKS
{
private:
    char s_name[30];
    char s_ach[20];

public:
    void readsports()
    {
        cout << "enter sports name and achievement: " << endl;
        cin >> s_name;
        cin >> s_ach;
    }
    void display()
    {
        cout << regno << setw(10);
        cout << name << setw(10);
        cout << age << setw(10);
        cout << perc << setw(10);
        cout << result << setw(10);
        cout << s_name << setw(10);
        cout << s_ach;
    }
};

int main()
{
    int i;
    SPORTS s[5];
    for (i = 0; i < 2; i++)
    {
        s[i].read();
        s[i].readmarks();
        s[i].readsports();
    }
    cout << "\nDetails of students \n";
    cout << " -------------------------------------- \n";
    cout << "regno name age percen result sportname achievement\n";
    for (i = 0; i < 2; i++)
    {
        s[i].display();
        cout << endl;
    }
    return 0;
}