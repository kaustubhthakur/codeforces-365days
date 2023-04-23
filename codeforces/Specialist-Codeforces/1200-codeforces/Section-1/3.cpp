#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, m, z = 0, s = 0, x;
        cin >> k;
        for (int i = 1; i <= k; i++)
            cin >> x, z = max(x, z);
        cin >> m;
        for (int i = 1; i <= m; i++)
            cin >> x, s = max(x, s);
        cout<<(z >= s ? "Alice" : "Bob")<<endl;;
        cout<<(z > s ? "Alice" : "Bob")<<endl;
    }
    return 0;
}