//w.a.p to check if it is a leap year or not
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year to check: ";
    cin >> year;

    if (year%5==0)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";
    }
    return 0;
}