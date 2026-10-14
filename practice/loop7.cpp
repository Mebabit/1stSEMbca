//Print sum of a number 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Sum of a number 1-n" << endl;

    cout << "Enter a range n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "\nThe sum is: " << sum;
    return 0;
}