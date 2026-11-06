//Copy Constructor
#include <iostream>
using namespace std;
class rec
{
    public:
        int l, b;
        
        rec()
        {
            l=4;
            b=3;
        }
        void display()
        {
            cout << "Length = " << l << endl;
            cout << "Breadth = " << b << endl << endl;
        }
};
int main()
{
    rec r1, r2;

    r1.display();

    r2.l = 9;
    r2.display();

    return 0;
}