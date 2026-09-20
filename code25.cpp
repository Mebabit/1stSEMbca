/* Input and number and range. W.a.p to print multiplication of a number. */

#include <iostream>
using namespace std;
int main()
{
    int i, n, r;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter range: ";
    cin >> r;

    for (i=0; i<=r; i++)
    {
        cout << n << " * " << i << " = " << i*n << endl;
    }
    return 0;
}