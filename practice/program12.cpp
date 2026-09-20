#include <iostream>
using namespace std;

int main()
{
    float sp, cp, p, l, pp, lp; // Declared as float to support decimals

    cout << "Enter the selling price: ";
    cin >> sp;

    cout << "Enter cost price: ";
    cin >> cp;

    if (sp > cp)
    {
        p = sp - cp;
        pp = (p / cp) * 100.0f;
        cout << "Profit = " << p << endl;
        cout << "Profit percentage = " << pp << "%" << endl;
    }
    else if (cp > sp)
    {
        l = cp - sp;
        lp = (l / cp) * 100.0f;
        cout << "Loss = " << l << endl;
        cout << "Loss percentage = " << lp << "%" << endl;
    }
    else
    {
        cout << "No Profit No Loss." << endl;
    }

    return 0;
}