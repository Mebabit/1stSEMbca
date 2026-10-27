/* Create a class for artist, have atleast 4 data member. Create 2 object.*/
#include <iostream>
#include <string>
using namespace std;
class Artist
{
    public:
    string name;
    int age;
    string gender;
    string skill;
};
int main()
{
    Artist A1, A2;
    A1.name = "Raven";
    A1.age = 21;
    A1.gender = "Male";
    A1.skill = "Painting";

    A2.name = "David";
    A2.age = 20;
    A2.gender = "Male";
    A2.skill = "Guitarist";

    return 0;
}
