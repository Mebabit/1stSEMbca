//Parameterise constructor
#include <iostream>
using namespace std;
class rec
{
    public:
        int len, br;

        rec(int l, int b)
        {
            len = l;
            br = b;
        }
        void display()
        {
            cout << "Length = " << len << endl;
            cout << "Breadth = " << br << endl << endl;
        }
};
int main()
{
    rec r1(2, 5);
    r1.display();

    rec r2(7,8);
    r2.display();

    return 0;
}