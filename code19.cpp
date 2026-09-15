//Simple calculator using switch case
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    float res;

    cout << "Enter number: ";
    cin >> a;

    cout << "Enter number: ";
    cin >> b;

    cout << "Enter an operator [+, -, /, *]: ";
    cin >> ch;

    switch (ch)
    {
        case '+':
            res = a+b;
            break;
        
        case '-':
            res = a-b;
            break;

        case '/':
            res = a/b;
            break;
        
        case '*':
            res = a*b;
            break;

        default:
            cout << "Invalid syntax.";
    }
    cout << "Result = " << res;
    return 0;
}