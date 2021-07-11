#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

const float PI = 3.1415;

float area(float b, float h)
{
    float area1;
    area1 = 0.5 * b * h;
    return area1;
}
float area(float s1)
{
    float area2;
    area2 = sqrt(3) / 4 * (s1 * s1);
    return area2;
}
float area(float s1, float s2, float ang)
{
    float area3;
    area3 = (s1 * s2 * sin((PI / 180) * ang)) / 2;
    return area3;
}
int main()
{
    float b, h, s1, s2, ang;
    cout << "\nEnter value of base and height: \n";
    cin >> b >> h;
    cout << "\nArea of right angle Triangle is " << area(b, h) << endl;

    cout << "\nInput the value of the side of the equilateral triangle: ";
    cin >> s1;
    cout << "\nArea of equilateral Triangle is " << area(s1) << endl;

    cout << "\nInput side1,side2,angle values for scalene triangle: \n";
    cin >> s1 >> s2 >> ang;
    cout << "\nArea of scalene Triangle is " << area(s1, s2, ang) << endl;

    return 0;
}