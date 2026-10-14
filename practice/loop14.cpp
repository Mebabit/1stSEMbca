// Count the number of a digit of a number
#include <iostream>
using namespace std;
int main()
{
    int n, c=0, d=0;

    cout << "Enter mutidigit number: ";
    cin >> n;

    while (n>0)
    {
        d = d%10;
        c += 1;
        n = n/10;
    }
    cout << "Number of digit is: " << c;

    return 0;
}