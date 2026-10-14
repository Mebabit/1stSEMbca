// Find the product of a digit 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, product {1}, digit;
    cout << "Enter value of n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        digit = n%10;
        product *= digit;
        n = n/10;
    }
    cout << "The product is: " << product;
    return 0;
}