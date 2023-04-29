#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i]-1) % k != i % k)
            {
                ans++;
            }
        }
        if (ans == 0)
        {
            cout << 0 << endl;
        }
        else if (ans == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}