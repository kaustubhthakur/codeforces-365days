#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c, a, b;
        cin >> n >> m >> r >> c >> a >> b;
        cout << min(a < r ? (2 * (n - r) + r - a) : a - r, b < c ? (2 * (m - c) + c - b) : b - c) << "\n";
    }
    return 0;
}
