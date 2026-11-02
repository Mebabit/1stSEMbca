#include <iostream>
using namespace std;
void func(int *a)
{
    *a = 100;
}
int main()
{
    int a = 400;

    func(&a);

    cout << "A = " << a;


    return 0;
}