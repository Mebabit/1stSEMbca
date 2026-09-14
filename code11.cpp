//w.a.p to check if a number 3 input side is an isoceles triangle or not.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st side: ";
    cin >> a;

    cout << "Enter 2nd side: ";
    cin >> b;

    cout << "Enter 3rd side: ";
    cin >> c;

    if (a==b && a==c)
    {
        cout << "It is not an isoceles triangle.";
    }
    else if (a==b || a==c || b==c)
    {
        cout << "It is an isoceles triangle.";
    }
    else
    {
        cout << "It is not an isoceles triangle.";
    }
    return 0;
}