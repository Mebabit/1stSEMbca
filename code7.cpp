//w.a.p to check if a person given mark has pass or fail
// >40 = passed
#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark to check: ";
    cin >> mark;

    if (mark >= 40)
    {
        cout << "You Passed.";
    }
    else
    {
        cout << "You Failed!";
    }
    return 0;
}