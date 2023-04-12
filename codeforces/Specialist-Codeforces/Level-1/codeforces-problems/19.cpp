#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v, v + n);
        if (n % 2 || v[n / 2] == v[n / 2 - 1] && count(v, v + n, v[n / 2]) >= n / 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
                cout << v[i] << " " << v[i + n / 2] << " ";
            cout << endl;
        }
    }
}