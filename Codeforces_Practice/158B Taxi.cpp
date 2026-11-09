// 158B : Taxi

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt[5] = {0};

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        cnt[s]++;
    }

    int taxis = cnt[4];

    taxis += cnt[3];
    cnt[1] -= cnt[3];

    taxis += cnt[2] / 2;
    cnt[2] %= 2;

    if (cnt[2] == 1)
    {
        taxis++;
        cnt[1] -= 2;
    }

    if (cnt[1] > 0)
    {
        taxis += (cnt[1] + 3) / 4;
    }

    cout << taxis << '\n';

    return 0;
}
