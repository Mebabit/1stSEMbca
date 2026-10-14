// print square of a nnumber 1 - n
#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout << "Square of a number 1 - n" << endl;

    cout << "Enter range n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << i*i << endl;
    }
    return 0;
}