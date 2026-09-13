//w.a.p to check the grade of a given percentage.
#include <iostream>
using namespace std;
int main()
{
    int per;
    cout << "Enter your percentage: ";
    cin >> per;

    if (per>80)
    {
        cout << "Grade A.";
    }
    else if (per>60)
    {
        cout << "Grade B";
    }
    else if (per>40)
    {
        cout << "Grade C.";
    }
    else
    {
        cout << "Grade F, You Fail!";
    }
    return 0;
}