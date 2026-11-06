#include <iostream>
using namespace std;
class employee
{
    public:
        char name[30];
        int salary;

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};
int main()
{
    employee e1;

    e1.name = "Meban";
    e1.salary = 210000;
    e1.display();
    return 0;
}