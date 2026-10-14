//Prime or not
#include <iostream>
using namespace std;
int main()
{
    int i, n, c = 0;

    cout << "Enter number to check: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c += 1;
        }
    }
    if (c==2)
    {
        cout << n << " is a Prime number.";
    }
    else
    {
        cout << n << " is not a Prime number.";
    }
    return 0;
}