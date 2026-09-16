/* Input 3 nnumbers, w.a.p to check whether they are equal or not,
if they are not. Find the greatest of three */

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 1st number: ";
    cin >> b;

    cout << "Enter 1st number: ";
    cin >> c;

    if (a == b == c)
    {
        cout << "They are all equal.";
    }
    else 
    {
        if (a>b && a>c)
        {
            cout << a << " is the greatest of three number.";
        }
        else if (b>a && b>c)
        {
            cout << b << " is the greatest of three number.";
        }
        else
        {
            cout << c << " is the greatest of three number.";
        }
    }
    return 0;
}