#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class base
{
public:
    virtual void show()
    {
        cout << "\n Base class show:";
    }

    void display()
    {
        cout << "\n Base class display:";
    }
};

class derive : public base
{
public:
    void display()
    {
        cout << "\n Drive class display:";
    }

    void show()
    {
        cout << "\n Drive class show:";
    }
};

int main()
{
    base obj1;
    base *p;
    cout << "\n\t P points to base:\n";
    p = &obj1;
    p->display();
    p->show();
    cout << "\n\n\t P points to derive:\n";
    derive obj2;
    p = &obj2;
    p->display();
    p->show();
    return 0;
}