// Sum Zero হয় এমন Subarray - এর সংখ্যা

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long prefix = 0;
    long long count = 0;

    unordered_map<long long, long long> freq;
    freq[0] = 1;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        prefix += x;

        count += freq[prefix];
        freq[prefix]++;
    }

    cout << count << '\n';

    return 0;
}
