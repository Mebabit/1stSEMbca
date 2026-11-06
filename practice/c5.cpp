#include <iostream>
using namespace std;
class rec
{
    public:
        int l, b;

        void detail()
        {
            cout << "Enter length: ";
            cin >> l;

            cout << "Enter breadth: ";
            cin >> b;
        }
        void area()
        {
            cout << "Area = " << l*b;
        }
};
int main()
{
    rec r1;
    r1.detail();
    r1.area();

    return 0;
}