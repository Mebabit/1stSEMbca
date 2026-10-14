#include <iostream>
using namespace std;
int main()
{
    int ch, no1, no2, res;

    cout << "Enter 2 number: ";
    cin >> no1 >> no2;

    do
    {
        cout << "\n1. Add" << endl;
        cout << "2. Substract" << endl;
        cout << "3. Divide" << endl;
        cout << "4. Multiply" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice [1-5]: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            res = no1+no2;
            break;

            case 2:
            res = no1-no2;
            break;

            case 3:
            res = no1/no2;
            break;

            case 4:
            res = no1*no2;
            break;

            case 5:
            cout << "Exit";
            break;

            default:
            cout << "Invalid Output";
            break;
        }
        cout << "\nResult is: " << res << endl;
    } while (ch != 5);
    return 0;
}