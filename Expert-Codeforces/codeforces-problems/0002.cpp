#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long ans = 0;
        priority_queue<long long> q;
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            if (x != 0)
                q.push(x);
            else if(q.size())
                ans += q.top(), q.pop();
        }
        cout << ans << endl;
    }
    return 0;
}