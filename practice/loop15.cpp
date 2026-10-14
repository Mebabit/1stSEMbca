// Product of a digit
#include <iostream>
using namespace std;
int main()
{
    int n, d, prod = 1;

    cout << "Enter multidigit number: ";
    cin >> n;

    while (n>0)
    {
        d = n%10;
        prod *= d;
        n /= 10;
    }
    cout << "The product is: " << prod;
    return 0;
}