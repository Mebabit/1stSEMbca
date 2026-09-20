/* Input a number. W.a.p to check whether it is buzz or not.
(A number is said to be buzz if it is divisible by 7 or last digit is 7.)*/
#include <iostream>
using namespace std;
int main()
{
    int no;

    cout << "Enter a number: ";
    cin >> no;

    if (no%7==0 || no%7==7)
    {
        cout << no << " is a Buzz number.";
    }
    else 
    {
        cout << no << " is not a Buzz number.";
    }
    return 0;
}