/* W.a.p to generate all even number from 31 - 50 using For loop */

#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 31; i <=50; i++)
    {
        if (i%2==0)
        {
            cout << i << " ";
        }
    }
    return 0;
}