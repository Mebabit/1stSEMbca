/* Input a number. W.a.p to find the factor of a number. */
#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout << "Enter a number: ";
    cin >> n;

    cout << endl;
    cout << "Factor of " << n << " are: " << endl;

    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            cout << i << " ";
        }
    }
    return 0;
}