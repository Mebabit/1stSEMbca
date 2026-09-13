//w.a.p to check the greatest of two number or equal
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    if (a>b)
    {
        cout << a << " is the gratest of two.";
    }
    else if (a<b)
    {
        cout << b << " is the greatest of two.";
    }
    else
    {
        cout << "They are equal.";
    }
    return 0;
}