#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char name[30], course[5];
    void detail();
    void printDt();
};
void student::detail()
{
    cout << "Enter your roll no: ";
    cin >> rollno;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your course: ";
    cin >> course;
}
void student::printDt()
{
    cout << "\nRoll No: " << endl;
    cout << "Name: " << endl;
    cout << "Course: " << endl;
}
int main()
{
    student s1;
    s1.detail();
    s1.printDt();
    return 0;
}