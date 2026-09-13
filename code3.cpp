//w.a.p to check if a number is odd.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to ckeck: ";
    cin >> a;

    if (a%2!=0)
    {
        cout << a << " is an odd number.";
    }
    return 0;
}