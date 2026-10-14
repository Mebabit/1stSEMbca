// Palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, digit, temp;
    cout << "Enter value of n: ";
    cin >> n;

    temp = n;

    while (n>0)
    {
        digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }
    cout << "The reverse is: " << rev << endl;
    
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