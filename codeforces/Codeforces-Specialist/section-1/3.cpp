#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= a[i];
        }
        if (ans == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}