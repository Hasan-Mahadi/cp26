// 236D : Let's Play Osu!

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double run = 0.0;
    double ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;

        ans += (2.0 * run + 1.0) * p;
        run = (run + 1.0) * p;
    }

    cout << fixed << setprecision(15) << ans << '\n';

    return 0;
}
