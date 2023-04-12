#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f, ans = 0;
        cin >> b >> a >> d >> c >> f >> e;
        if (a == c && e < a)
            ans = abs(b - d);
        else if (c == e && a < c)
            ans = abs(d - f);
        else if (a == e && c < a)
            ans = abs(b - f);
        cout << ans << endl;
    }

    return 0;
}