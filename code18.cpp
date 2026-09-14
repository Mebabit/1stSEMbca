//Create a simple caculator. 
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;

    cout << "--------CALCULATOR--------" << endl;
    cout << "Enter an operator [+, -, *, /]: ";
    cin >> op;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    if (op == '+')
    {
        cout << "Result = " << a+b;
    }
    else if (op == '-')
    {
        cout << "Result = " << a-b;
    }
    else if (op == '*')
    {
        cout << "Result = " << a*b;
    }
    else if (op == '/')
    {
        cout << "Result = " << a/b;
    }
    else
    {
        cout << "Invalid operator.";
    }
    return 0;
}