#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    
        int x;
        cin >> x;
        int a[x + 1], b[x + 1];
        for (int i = 1; i <= x; i++)
            cin >> a[i];
        for (int i = 1; i <= x; i++)
            cin >> b[i];
        bool flag = 1;
        for (int i = 1; i < x; i++)
        {
            flag &= ((a[i] <= a[x] && b[i] <= b[x]) || (a[i] <= b[x] && b[i] <= a[x]));
        }
        cout << (flag ? "Yes" : "No")<<endl;
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