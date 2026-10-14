// Find the average of a number 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, avg;

    cout << "Enter range n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << i << " ";
        sum += i;
    }
    avg = (sum/n);
    cout << "\nThe sum is: " << sum << endl;
    cout << "The average is: " << avg;

    return 0;
}