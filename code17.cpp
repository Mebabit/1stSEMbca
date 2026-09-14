//w.a.p to check whether a character ia vowel or consonant.
#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter an alphabet to check: ";
    cin >> ch;

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout << "It is a vowel.";
    }
    else
    {
        cout << "It is a consonant.";
    }
    return 0;
}