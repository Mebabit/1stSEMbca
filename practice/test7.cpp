#include <iostream>
using namespace std;
int main()
{
    int i, r, p=1;

    cout << "Enter range: ";
    cin >> r;

    for (i=1; i<=r; i++)
    {
        p *= i;
    }
    cout << "Factorial of " << r << " is: " << p;

    return 0;
}