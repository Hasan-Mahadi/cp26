// Consecutive Equal Characters - এর Segment Count

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.empty())
    {
        cout << 0 << '\n';
        return 0;
    }

    int segments = 1;

    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            segments++;
        }
    }

    cout << segments << '\n';

    return 0;
}
