#include <iostream>
using namespace std;
int main()
{
    int n1, n2, res, ch;

    cout << "Enter 2 number: ";
    cin >> n1 >> n2;

    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl << endl;

        cout << "Enter choice [1-5]: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
                res = n1+n2;
                break;
            
            case 2:
                res = n1-n2;
                break;
            
            case 3:
                res = n1*n2;
                break;

            case 4:
                res = n1/n2;
                break;

            case 5:
                cout << "Exit" << endl;
                break;
        }
        cout << "Result is: " << res << endl << endl;
    } while (ch!=5);

    return 0;
}