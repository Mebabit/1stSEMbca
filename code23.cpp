// W.a.p to find the sum 1-n

#include <iostream>
using namespace std;
int main()
{
    int i, n, total {0};

    cout << "Enter range upto which you want to add: ";
    cin >> n;

    for (i=0; i<=n; i++)
    {
        total += i;
    }
    cout << "Total = " << total;
    return 0;
}