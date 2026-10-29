#include <iostream>
using namespace std;
int main()
{
    int n, d, s=0;

    cout << "Enter multidigit number: ";
    cin >> n;

    while (n>0)
    {
        d = n%10;
        s += d;
        n /= 10;
    }
    cout << "Sum of digit is: " << s;

    return 0;
}