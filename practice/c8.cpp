#include <iostream>
using namespace std;
class item
{
    public:
        static int count;
        int number;

        void get_data(int a)
        {
            number=a;
            count++;
        }

        void get_count()
        {
            cout << "Count = " << count << endl;
        }
};
int item::count;
int main()
{
    item a, b, c;
    a.get_count();
    b.get_count();
    c.get_count();

    a.get_data(100);
    a.get_count();

    b.get_data(200);
    c.get_data(300);
    a.get_count();

    return 0;
}