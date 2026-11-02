#include <iostream>
using namespace std;
void swap(int&, int&);
int main()
{
    int a, b;

    cout << "Enter 1st number A: ";
    cin >> a;

    cout << "Enter 2nd number : ";
    cin >>b;

    swap(a, b);
    return 0;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping,\n A = " << a << ", B = " << b << endl;
}