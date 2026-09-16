/*Input 3 angle and check whether it is available or not. If it's possible
check whether it is acute, right or obtuse angle triangle or not
Acute - all angle <90
Right - any one angle =90
Obtuse - any one angle >90*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter 1st angle: ";
    cin >> a;

    cout << "Enter 1st angle: ";
    cin >> b;

    cout << "Enter 1st angle: ";
    cin >> c;

    if (a+b+c == 180)
    {
        cout << "Triangle is possible." << endl;
        if (a<90 && b<90 && c<90)
        {
            cout << "It is an Acute angle triangle.";
        }
        else if (a==90 || b==90 || c==90)
        {
             cout << "It is a right angle triangle.";
        }
        else if (a>90 || b>90 || c>90)
        {
            cout << "It is an Obtuse angle triangle.";
        }
        else
        {
            cout << "Invalid Angle!!";
        }
    }
    else
    {
        cout << "Invalid Angle!!";
    }
    return 0;
}