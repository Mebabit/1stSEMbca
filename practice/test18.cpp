#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;

    cout << "---------- Simple Caculator ----------" << endl;
    cout << endl << "Enter 2 number" << endl;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter an operator [+, -, *, /]: ";
    cin >> ch;

    if (ch == '+')
    {
        cout << "Result = " << a+b;
    }
    else if (ch == '-')
    {
        cout << "Result = " << a-b;
    }
    else if (ch == '*')
    {
        cout << "Result = " << a*b;
    }
    else if (ch == '/')
    {
        cout << "Result = " << a/b;
    }
    else
    {
        cout << "Invalid operator";
    }
    return 0;
}