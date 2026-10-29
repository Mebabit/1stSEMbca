#include <iostream>
using namespace std;
int main()
{
    int i, r, sum=0;

    cout << "Enter range: ";
    cin >> r;

    for (i=1; i<=r; i++)
    {
        sum += i;
    }
    cout << sum;

    return 0;
}