//Pass by reference
#include <iostream>
using namespace std;
void func(int *x)
{
    *x = 300;
}
int main()
{
    int a;
    a = 500;

    func(&a);
    cout << "A = " << a;
    return 0;
}