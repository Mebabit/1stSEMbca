/* W.a.p that create a class called student. The student should have 3 data member
and 2 member function. 1 function is for taking input and other member function 
is for printing the detail */
#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    char name[40], course[5];
    void detail()
    {
        cout << "Enter your roll no: ";
        cin >> rollno;

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your course: ";
        cin >> course;
    }
    void printDt()
    {
        cout << "\nRoll No: " << rollno << endl;

        cout << "Name: " << name << endl;

        cout << "Course: " << course << endl;
    }
};
int main()
{
    student s1;
    s1.detail();
    s1.printDt();
    return 0;
}