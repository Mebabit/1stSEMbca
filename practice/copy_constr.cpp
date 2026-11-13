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
    rectangle(const rectangle &a)
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
    rectangle r1(22, 45);
    r1.display();

    rectangle r2(22, 43);
    r2.display();

    return 0;
}