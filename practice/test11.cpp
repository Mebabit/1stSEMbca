#include <iostream>
using namespace std;
int main()
{
    int n, d, rev=0, temp;
    
    cout << "Enter a multidigit number: ";
    cin >> n;

    temp = n;

    while (n>0)
    {
        d = n%10;
        rev = rev*10 + d;
        n /= 10;
    }
    if (temp == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}