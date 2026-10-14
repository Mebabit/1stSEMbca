// Sum of an even 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum {0};
    cout << "Enter value of n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            sum += i;
        }
    }
    cout << "The sum is: " << sum;
    return 0;
}