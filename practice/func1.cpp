#include <iostream>
using namespace std;
void add(int, int);
int main()
{
    int a, b;

    cout << "Enter 2 number: ";
    cin >> a >> b;

    add(a, b);

    return 0;
}
void add(int x, int y)
{
    cout << "Result is: " << (x+y);
}