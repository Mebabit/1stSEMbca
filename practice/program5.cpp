/* Input three number, write a program in python to find the sum and
average of three numbers.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, s, avg;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rd number: ";
    cin >> c;
    cout << endl;

    cout << "The sum of three number is " << a+b+c << endl;
    cout << "The average of three number is " << (a+b+c)/3;
    return 0;
}