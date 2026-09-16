/*Input the sale of a salesman. W.a.p to find and
display the commission based on  the following critiria:
sale                    commision
upto 10000           -  5% of sales
>10000 & <=30k       -  10% of sales
>30k & <=50k         -  15% of sales
>50k                 -  20% of sales
*/

#include <iostream>
using namespace std;
int main()
{
    int sale;
    float com;

    cout << "Enter your sales: ";
    cin >> sale;

    if (sale <= 10000)
    {
        com = 0.05f*sale;
    }
    else if (sale > 10000 && sale <= 30000)
    {
        com = 0.10f*sale;
    }
    else if (sale > 30000 && sale <= 50000)
    {
        com = 0.15f*sale;
    }
    else
    {
        com = 0.20f*sale;
    }
    cout << "Your commission is " << com << endl;
    return 0;
}