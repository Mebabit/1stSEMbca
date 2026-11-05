#include <iostream>
using namespace std;
class Artist
{
    public:
        char name[30];
        int age;
        char gen[7];
        char skill;
};
Artist a1, a2;

a1.name = "Mebabit";
a1.age = 21;
a1.gen = "Male";
a1.skill = "Cooding";

a2.name = "Raven";
a2.age = 20;
a2.gen = "Male";
a2.skill = "Painter";