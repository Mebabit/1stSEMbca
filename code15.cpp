//w.a.p to find the the smallest of two number
#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    if (a<b)
    {
        cout << a << " is the smallest.";
    }
    else if (b<a)
    {
        cout << b << " is the smallest.";
    }
    else
    {
        cout << "They are equal.";
    }
    return 0;
} 