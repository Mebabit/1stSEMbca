#include <iostream>
using namespace std;
int main()
{
    int ch, no1, no2, res;

    cout << "Enter 1st number: ";
    cin >> no1;

    cout << "Enter 2nd number: ";
    cin >> no2;

    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice [1-5]: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            res = no1+no2;
            break;

            case 2:
            res = no1-no2;
            break;

            case 3:
            res = no1*no2;
            break;

            case 4:
            res = no1/no2;
            break;

            case 5:
            cout << "Exit";
            break;

            default:
            cout << "Invalid option";
            break;
        }
        cout << "Result is: " << res << endl << endl;
    } while (ch!=5);
    return 0;
}