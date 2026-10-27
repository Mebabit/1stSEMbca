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
    void detail()
    {
        cout << "Length = " << len << endl;
        cout << "Breadth = " << br << endl << endl;
    }
};
int main()
{
    rectangle r1, r2;
    r1.detail();

    r2.len = 6;
    r2.detail();

    return 0;
}