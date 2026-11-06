#include <iostream>
using namespace std;
class circle
{
    public:
    int r;

    void detail()
    {
        cout << "Enter radius: ";
        cin >> r;
    }
    void area()
    {
        cout << "Area = " << 1.43*r*r;
    }
};
int main()
{
    circle c1;

    c1.detail();
    c1.area();

    return 0;
}