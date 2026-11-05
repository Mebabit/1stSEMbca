#include <iostream>
using namespace std;
class student
{
    public:
        char name[30];
        int age;
        char dept;

        void display();
        void printDisplay();
};
void student::display()
{
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your department: ";
    cin >> dept;
}
void printDisplay()
{
    cout << "\n---------------------------------" << endl << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Department: " << dept << endl;
}
int main()
{
    student s1;

    s1.display();
    s1.printDisplay();

    return 0;
}