//w.a.p to check if a number is even.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number to check: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is even number.";
    }
    return 0;
}