// একটি Element সরিয়ে Maximum Sum

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    long long minimum;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        sum += x;

        if (i == 0 || x < minimum)
        {
            minimum = x;
        }
    }

    if (minimum < 0)
    {
        sum -= minimum;
    }

    cout << sum << '\n';

    return 0;
}
