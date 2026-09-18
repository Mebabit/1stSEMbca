/* Input the basic salary of an employee.
W.a.p to find the gross and net salary of an employee, Given:
da = 15% of basic
hra = 10% of basic
pf = 12% of basic
gross = basic + da + hra
net = gross + pf */

#include <iostream>
using namespace std;
int main()
{
    int basic;
    float da, hra, pf, gross, net;

    cout << "Enter basic salary: ";
    cin >> basic;

    da = 0.15f*basic;
    
    hra = 0.10f*basic;

    pf = 0.12f*basic;

    gross = basic + da + hra;

    net = gross + pf;

    cout << "Net salary is " << net << " and Gross is " << gross;
    return 0;
}