//Count the number of a digit of a number 
#include <iostream>
using namespace std;
int main()
{
    int n, c=0;

    cout << "Enter multidigit number: ";
    cin >> n;

    if (n==0)
    {
        c = 1;
    }
    else
    {
        while (n>0)
        {
            c++;
            n /= 10;
        }
    }
    cout << c;

    return 0;
}