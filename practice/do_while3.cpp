#include <iostream>
using namespace std;
int main()
{
    int a, b, ch, res;

    cout << "\n==========CALCULATOR=========" << endl;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice [1-5]: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                res = a+b;
                break;

            case 2:
                res = a-b;
                break;

            case 3:
                res = a*b;
                break;

            case 4:
                res = a/b;
                break;

            case 5:
                cout << "Exit";
                break;

            default:
                cout << "Invalid option" << endl;
                break;
        }
        cout << "\nResult is: " << res << endl;
    } while (ch!=5);
    return 0;
}