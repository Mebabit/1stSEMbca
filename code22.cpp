//Multiplication of an input number.
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    for (i=0; i<=12; i++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }
    return 0;
}