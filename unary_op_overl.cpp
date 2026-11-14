#include <iostream>
using namespace std;
class distance
{
    private:
    int feet;
    int inches;

    public:
    distance()
    {
        feet = 0;
        inches = 0;
    }
    distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << "Feet = " << feet << endl;
        cout << "Inches = " << inches << endl << endl;
    }
    distance operator -()
    {
        feet = -feet;
        inches = -inches;

        return distance(feet, inches);
    }
};
int main()
{
    distance d1(11, 12), d2(-5, 33);
    -d;
    d1.display();

    -d2;
    d2.display();

    return 0;
}