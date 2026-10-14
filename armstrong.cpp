// Armstrong or not
#include <iostream>
using namespace std;
int main()
{
    int i, n, arm {0}, digit, temp;

    cout << "Enter value of n: ";
    cin >> n;
    temp = n;

    while (n>0)
    {
        digit = n%10;
        arm += digit*digit*digit;
        n /=10;
    }
    cout << arm << endl;

    if (temp == arm)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}