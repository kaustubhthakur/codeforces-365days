#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n, t;
ll a[200005];

int main()
{
    cin >> n;
    while (n--)
    {
        ll sum = 0, sm, kk, tk, ans;
        cin >> t;
        ans = t;
        for (int i = 1; i <= t; i++)
            cin >> a[i];
        for (int i = 1; i <= t; i++)
        {
            kk = i;
            sum += a[i];
            tk = 0;
            sm = 0;
            for (int j = i + 1; j <= t; j++)
            {
                sm += a[j];
                tk++;
                if (sm == sum)
                {
                    kk = max(kk, tk);
                    sm = 0;
                    tk = 0;
                }
            }
            if (tk == 0)
                ans = min(ans, kk);
        }
        cout << ans << endl;
    }
    return 0;
}