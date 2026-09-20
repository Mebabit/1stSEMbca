/* Input a number. W.a.p to check whether it is a single digit,
double digit or three digit number. */

#include <iostream>
using namespace std;
int main()
{
    int no;

    cout << "Enter number: ";
    cin >> no;

    if (no==0)
    {
        cout << no << " is zero.";
    }
    else if (no >= 1 && no <=9)
    {
        cout << no << " is a single digit number.";
    }
    else if (no >= 10 && no <= 99)
    {
        cout << no << " is a double digit number.";
    }
    else if (no >= 100 && no <= 999)
    {
        cout << no << " is a three digit nnumber.";
    }
    else
    {
        cout << no << " is more than three digit number.";
    }
    return 0;
}