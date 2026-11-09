// 2218A : The 67th Integer Problem

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x < 67)
        {
            cout << x + 1 << '\n';
        }
        else
        {
            cout << 67 << '\n';
        }
    }

    return 0;
}
