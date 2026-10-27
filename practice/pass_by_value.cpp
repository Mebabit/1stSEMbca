//Pass by value
#include <iostream>
using namespace std;
void func(int a)
{
    a  = 200;
}
int main()
{
    int a;
    a = 500;

    func(a);

    cout << "A = " << a;

    return 0;
}