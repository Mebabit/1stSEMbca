//w.a.p to check whether a number is in between 1-100 or not.
#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter a number to check: ";
    cin >> a;

    if (1<=a && a<=100)
    {
        cout << a << " is in between 1-100.";
    }
    else
    {
        cout << a << " is not in between 1-100.";
    }
    return 0;
}