/*W.a.p for a class called rectangle, have appropriate data members,
have a function that will find the area of a rectangle*/
#include <iostream>
using namespace std;
class rectangle
{
    public:
    int len, br;
    void detail()
    {
        cout << "Enter the length: ";
        cin >> len;

        cout << "Enter the breadth: ";
        cin >> br;
    }
    void area()
    {
        cout << "Area of a rectangle is: " << len*br;
    }
};
int main()
{
    rectangle r1;
    r1.detail();
    r1.area();
    return 0;
}