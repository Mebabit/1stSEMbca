/* A student will not be allowed to sit for the exam if his/her attendance is
below 75% 
No. of class held (noh) = ?
No. of class attend (noa) = ?
eligible = noa/noh*100 */
#include <iostream>
using namespace std;
int main()
{
    int noa, noh;
    float attendance;

    cout << "Enter a number of class held: ";
    cin >> noh;

    cout << "Enter number of class attend: ";
    cin >> noa;

    attendance = (noa*100.0f)/noh;

    if (attendance >= 75.0f)
    {
        cout << "You are eligible to sit for the exam.";
    }
    else
    {
         cout << "You are not eligible to sit for the exam.";
    }
    return 0;
}