#include <iostream>
using namespace std;
void add(int, int);
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    add(a, b);
    return 0;
}
void add(int x, int y)
{
    cout << "Sum is: " << (x+y);
}