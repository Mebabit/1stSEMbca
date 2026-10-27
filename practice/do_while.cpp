//Calculator
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, res, ch;

    cout << "Enter 1st number: ";
    cin >> n1;

    cout << "Enter 2nd number: ";
    cin >> n2;

    do
    {
        cout << endl;
        cout << "1. Add" << endl;
        cout << "2. Substract" << endl;
        cout << "3. Divide" << endl;
        cout << "4. Multiply" << endl;
        cout << "4. Exit" << endl;
        cout << endl;

        cout << "Enter choice [1-5]: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            res = n1 + n2;
            break;

            case 2:
            res = n1 - n2;
            break;

            case 3:
            res = n1 / n2;
            break;

            case 4:
            res = n1 * n2;
            break;

            case 5:
            cout << "Exit";
            break;

            default:
            cout << "Invalid output";
            break;
        }
        cout << "\nResult is: " << res << endl;
    } while (ch != 5);
    return 0;
}