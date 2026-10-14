// Find the sum of a number 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        sum += i;
    }
    cout << "The sum is: " << sum;
    return 0;
}