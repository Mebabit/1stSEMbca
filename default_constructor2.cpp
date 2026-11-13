#include <iostream>
using namespace std;
class rectangle
{
    public:
    int len, br;

    rectangle()
    {
        len = 1;
        br = 2;
    }
    void display()
    {
        cout << "Length = " << len << endl;
        cout << "Breadth = " << br << endl;
    }
};
int main()
{
    rectangle r1, r2;

    r1.display();

    r2.len = 21;
    r2.display();

    return 0 ;
}