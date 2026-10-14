// Factorial of n
#include <iostream>
using namespace std;
int main()
{
    int i, n, product = 1;
    cout << "Enter value of n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        product *= i;
    }
    cout << "The factorial of n is: " << product;
    return 0;

}