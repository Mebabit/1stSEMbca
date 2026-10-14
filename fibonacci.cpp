// Fibonacci number
// 0, 1, 1, 2, 3, 5, 8

#include <iostream>
using namespace std;
int main()
{
    int n, a {0}, b {1}, c;

    cout << "Enter value of n: ";
    cin >> n;

    while (n>0)
    {
        c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << a << b << c;
    return 0;
}