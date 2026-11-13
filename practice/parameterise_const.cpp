#include <iostream>
using namespace std;
class rectangle
{
    public:
    int len, br;

    rectangle(int l, int b)
    {
        len = l;
        br = b;
    }
    void display()
    {
        cout << "Length = " << len << endl;
        cout << "Breadth = " << br << endl;
    }
};
int main()
{
    rectangle r1(1, 4);
    r1.display();

    rectangle r2(11, 23);
    r2.display();

    return 0;
}