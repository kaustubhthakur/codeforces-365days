#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i =0,j= 0; i < n; ++i)
    {
        while (j < m && b[j] < (a[i] - k))
           ++j;
        if (j < m && b[j] <= (a[i] + k))
            ++ans,++j;
        
    }
    cout << ans << endl;
    return 0;
}