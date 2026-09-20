/* Input a time in second.
W.a.p to convert time into hours, minutes and seconds */

#include <iostream>
using namespace std;
int main()
{
    int t, h, m, s;

    cout << "Enter time in second: ";
    cin >> t;

    h = t/3600;
    m = (t%3600)/60;
    s = t%60;

    cout << h << endl;
    cout << m << endl;
    cout << s << endl;
    return 0;
}