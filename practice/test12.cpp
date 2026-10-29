#include <iostream>
using namespace std;
int main()
{
    int n, d, temp, arm=0;

    cout << "Enter multidigit number: ";
    cin >> n;
    temp = n;

    while (n>0)
    {
        d=n%10;
        arm += d*d*d;
        n /= 10;
    }
    if (arm == temp)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}