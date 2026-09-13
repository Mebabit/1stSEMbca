//w.a.p to check if a number is odd or even or zero.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a%2==0)
    {
        cout << a << " is an even number.";
    }
    else if (a%2!=0)
    {
        cout << a << " is an odd number.";
    }
    else
    {
        cout << a << " is equal to zero.";
    }
    return 0;
}