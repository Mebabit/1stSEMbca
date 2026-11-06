//Copy constructor
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
        rec (const rec &a)
        {
            len = a.len;
            br = a.br;
        }
        void display()
        {
            cout << "Length = " << len << endl;
            cout << "Breadth = " << br << endl << endl;
        }
};
int main()
{
    rec r1(3, 4);
    r1.display();

    rec r2=r1;
    r2.display();

    return 0;
}