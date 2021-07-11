#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define max_subjects 3

class STUDENT
{
private:
    char usn[10], name[50];
    float marks[max_subjects - 1];
    float avg;

public:
    void read()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the USN: ";
        cin >> usn;

        for (int i = 0; i < max_subjects; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void calculate()
    {
        if ((marks[0] < marks[1]) && (marks[0] < marks[2]))
        {
            avg = (marks[1] + marks[2]) / 2.0;
        }

        else if (marks[1] < marks[2])
        {
            avg = (marks[0] + marks[2]) / 2.0;
        }

        else
        {
            avg = (marks[0] + marks[1]) / 2.0;
        }
    }
    void display()
    {
        cout << "USN " << usn << endl;
        cout << " Name " << name << endl;
        cout << " Average Marks " << avg << endl;
    }
};

int main()
{
    STUDENT s[10];
    for (int i = 0; i < 2; i++)
    {
        s[i].read();
    }
    for (int i = 0; i < 2; i++)
    {
        s[i].calculate();
        s[i].display();
    }

    return 0;
}