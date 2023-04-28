#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = -1;
    for (int i = 0; i <= n; i++)
    {
        if (i * (i - 1) / 2 + (n - i) * (n - i - 1) / 2 == m)
        {
            ans = i;
            break;
        }
     
        }   if (ans == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (i <= ans)

                    cout << "1"<<" ";

                else

                    cout << "-1"<<" ";
            }
            cout << endl;
    }
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