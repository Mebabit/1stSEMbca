//Print multiplication of a number
#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout << "Enter a number: ";
    cin >> n;

    for (i=0; i<=12; i++)
    {
        cout << n << " x " << i << " = " << i*n << endl;
    }
    return 0;
}