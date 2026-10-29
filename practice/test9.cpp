#include <iostream>
using namespace std;
int main()
{
    int n, d, p=1;

    cout << "Enter multidigit number: ";
    cin >> n;

    while (n>0)
    {
        d = n%10;
        p *= d;
        n /= 10;
    }
    cout << "Product of a digit is: " << p;

    return 0;
}