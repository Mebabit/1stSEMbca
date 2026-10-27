//add 3 number
#include <iostream>
using namespace std;
void add(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter 3 number: ";
    cin >> a >> b >> c;

    add (a, b, c);
    return 0;
}
void add(int x, int y, int z)
{
    cout << "Result is: " << (x+y+z);
}