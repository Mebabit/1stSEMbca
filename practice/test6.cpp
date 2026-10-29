#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout << "Enter number: ";
    cin >> n;

    for (i=1; i<=12; i++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }
    return 0;
}