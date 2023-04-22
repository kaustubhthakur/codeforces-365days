#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        int cost = k, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= l && a[i] <= r && cost >= a[i] && cost > 0)
            {
                cost = cost - a[i];
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}