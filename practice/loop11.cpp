//Find factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int i, n, prod = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        prod *= i;
    }
    cout << "Factorial of " << n << " is: " << prod << endl;

    return 0;
}