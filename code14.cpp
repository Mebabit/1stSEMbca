//w.a.p to check if a number is divisible by 3 or 5.
#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter a number to check: ";
    cin >> a;

    if (a%3==0 || a%5==0)
    {
        cout << a << " is divisible by 3 or 5.";
    }
    else
    {
        cout << a << " is not divisible by both 3 or 5.";
    }
    return 0;
}