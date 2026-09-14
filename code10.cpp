/*W.a.p to check each category >13 is children <20 is tenage
and <60 is Adult >60 is senior citizen.*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "To check age category." << endl;
    cout << "Enter your age to check: ";
    cin >> age;

    if (age <=13)
    {
        cout << "You are children";
    }
    else if (age < 20)
    {
        cout << "You are teenage.";
    }
    else if (age < 60)
    {
        cout << "You are adult.";
    }
    else
    {
        cout << "You are senior citizen.";
    }
    return 0;
}