/* A company decided to give bonus to employee accoring to the following critiria
>10 years - 10%
>6 years <= 10 - 8%
<6 years - 5%
*/

#include <iostream>
using namespace std;
int main()
{
    int year;
    float salary, bonus, amount;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter year of service: ";
    cin >> year;

    if (year > 10)
    {
        bonus = 0.10f*salary;
    }
    else if (year > 6 && year <= 10)
    {
        bonus = 0.08f*salary;
    }
    else if (year < 6)
    {
        bonus = 0.05f*salary;
    }
    else
    {
        cout << "Invalid input.";
    }
    amount = salary + bonus;
    cout << "Net bonus is " << bonus << " and total amount is " << amount << endl;
    return 0;
}