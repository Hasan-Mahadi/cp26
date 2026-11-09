// Binary String - কে Perfectly Alternating করতে Minimum Changes

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int changes1 = 0;
    int changes2 = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        char expected1;
        char expected2;

        if (i % 2 == 0)
        {
            expected1 = '0';
            expected2 = '1';
        }
        else
        {
            expected1 = '1';
            expected2 = '0';
        }

        if (s[i] != expected1)
        {
            changes1++;
        }

        if (s[i] != expected2)
        {
            changes2++;
        }
    }

    if (changes1 < changes2)
    {
        cout << changes1 << '\n';
    }
    else
    {
        cout << changes2 << '\n';
    }

    return 0;
}
