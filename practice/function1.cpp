//add
#include <iostream>
using namespace std;
void add(int, int); //function declaration
int main()
{
    int a, b;
    cout << "Enter 2 number: ";
    cin >> a >> b;

    add (a, b); //function call
    return 0;
}
void add(int x, int y)
{
    cout << "Sum is: " << (x+y);
}