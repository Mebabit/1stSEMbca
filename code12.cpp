//w.a.p to check the largest of three number.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rd number: ";
    cin >> c;

    if (a>b && a>c)
    {
        cout << a << " is the greatest of three number.";
    }
    else if (b>c && b>a)
    {
        cout << b << " is the greatest of three number.";
    }
    else
    {
        cout << c << " is the greatest of three number.";
    }
    return 0;

}