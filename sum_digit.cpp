// Find the sum of digit
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, digit;
    cout << "Enter multidigit number: ";
    cin >> n;

    while (n>0)
    {
        digit = n%10;
        sum += digit;
        n = n/10;
    }
    cout << "The sum of a digit is: " << sum;
    return 0;
}