#include <iostream>
using namespace std;
class student
{
    public:

    char name[30];
    int age;
    char program[5];

    void detail()
    {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter your program: ";
        cin >> program;
    }
    void printDetail()
    {
        cout << "Name: " << name << endl;

        cout << "Age: " << age << endl;

        cout << "Program: " << program << endl;
    }
};
int main()
{
    student t1;

    t1.detail();
    t1.printDetail();

    return 0;
}