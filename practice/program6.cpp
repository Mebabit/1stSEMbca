//Find the sum of number 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, total;

    cout << "Enter the value upto which you want the series: ";
    cin >> n;

    total = 0;

    for (i=0; i<=n; i++)
    {
        total = total + i;
    }
    cout << "Total = " << total;
    return 0;
}