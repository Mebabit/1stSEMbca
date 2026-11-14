
#include <iostream>
using namespace std;
class student
{
    public:
    int roll_no;
    float marks;
    char name[30], course[10];

    void detail()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Course: ";
        cin >> course;

        cout << "Enter Marks: ";
        cin >> marks;

        cout << endl;
    }
    void display()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;

        cout << endl;
    }
};
int main()
{
    student s[10];
    int count = 0, ch, i, searchRoll;
    bool found;
    float sum, avg;
    int maxIndex;

    do
    {
        cout << "1. Add student details" << endl;
        cout << "2. Display all student records" << endl;
        cout << "3. Search for a student using Roll Number" << endl;
        cout << "4. Calculate and display the average marks" << endl;
        cout << "5. Display the highest-scoring student" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice [1-6]: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                s[count].detail();
                count++;
                break;

            case 2:
                for (i = 0; i < count; i++)
                {
                    cout << " Student " << i + 1 << ":" << endl;
                    s[i].display();
                }
                break;

            case 3:
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;
                found = false;
                for (i = 0; i < count; i++)
                {
                    if (s[i].roll_no == searchRoll)
                    {
                        cout << "\nRecord Found:" << endl;
                        s[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "\nStudent not found!" << endl;
                }
                break;

            case 4:
                if (count == 0)
                {
                    cout << "No records found!" << endl;
                }
                else
                {
                    sum = 0;
                    for (i = 0; i < count; i++)
                    {
                        sum += s[i].marks;
                    }
                    avg = sum / count;
                    cout << "Average Marks: " << avg << endl;
                }
                break;

            case 5:
                if (count == 0)
                {
                    cout << "No records found!" << endl;
                }
                else
                {
                    maxIndex = 0;
                    for (i = 1; i < count; i++)
                    {
                        if (s[i].marks > s[maxIndex].marks)
                        {
                            maxIndex = i;
                        }
                    }
                    cout << "Highest-Scoring Student:" << endl << endl;
                    s[maxIndex].display();
                }
                break;

            case 6:
                cout << "Exit" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }while (ch != 6);

    return 0;
}