// Palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int n, d, rev = 0, temp;

    cout << "Enter multidigit number: ";
    cin >> n;
    temp = n;


    while (n>0)
    {
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    if (rev==temp)
    {
        cout << "It is Palindrome";
    }
    else
    {
        cout << "It is not a Palindrome";
    }
    return 0;
}