//w.a.p to check if a number is positive or negative or zero
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to check: ";
    cin >> a;

    if (a > 0)
    {
        cout << a << " is positive number.";
    }
    else if (a < 0)
    {
        cout << a << " is a negative number.";
    }
    else
    {
        cout << a << " is equal to zero.";
    }
    return 0;
}