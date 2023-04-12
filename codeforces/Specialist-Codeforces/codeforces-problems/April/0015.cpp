#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    int d = x * x + y * y;
    int l = 0;
    while (l * l < d)
        ++l;
    int ans = 2;
    if (l * l == d)
        ans = 1;
    if (x == 0 && y == 0)
        ans = 0;
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}