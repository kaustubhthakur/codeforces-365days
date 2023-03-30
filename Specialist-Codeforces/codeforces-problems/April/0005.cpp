#include <bits/stdc++.h>
using namespace std;
int t, n, l, r;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r;
        bool flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if (r / i * i < l)
                flag = 0;
        }
        if (!flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
                cout << r / i * i << ' ';
            cout << endl;
        }
    }
    return 0;
}