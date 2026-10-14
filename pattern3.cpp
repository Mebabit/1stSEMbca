/* Print this pattern
4 3 2 1
4 3 2
4 3
4
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i=1; i<=4; i++)
    {
        for (j=4; j>=i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}