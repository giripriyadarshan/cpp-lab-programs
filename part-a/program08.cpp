#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

#define n 5

template <class T>
void sort(T arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int x[5], i;
    float y[5];
    cout << "Enter any 5 integer array elements:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> x[i];
    }
    cout << "Enter any 5 floating array elements:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> y[i];
    }
    sort(x);
    sort(y);
    cout << "After sorting they are :" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << x[i] << setw(5);
    }
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        cout << y[i] << setw(5);
    }
    return 0;
}