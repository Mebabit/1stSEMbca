// Print sum of even 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << "Enter range n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nThe sum is: " << sum;
    return 0;
}