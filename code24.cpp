/* W.a.p to find the sum of a series below:
s = 1, 4, 9, 16, ....., 100 */

#include <iostream>
using namespace std;
int main()
{
    int i, n, total {0};
    
    for (i=1; i<=10; i++)
    {
        total += i*i;
    }
    cout << "Sum of the series = " << total;
    return 0;
}