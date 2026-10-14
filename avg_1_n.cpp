//Find the average of a number 1-n
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum {0}, avg;
    cout << "Enter value of n: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        sum += i;
    }
    avg = sum/n;
    cout << "The average of is: " << avg;

    return 0;
}