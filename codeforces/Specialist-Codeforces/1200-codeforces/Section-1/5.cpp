#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        map<int, int> p;
        int n, a;
        for (int i = 1; i <= m; i++)
        {
            cin >> n;
            for (int j = 0; j < n; j++)
            {
                cin >> a;
                p[a] = i;
            }
        }
        map<int, int> l;
        for (auto i : p)
            l[i.second] = i.first;
        if (l.size() < m)
            cout << -1 << endl;
        else
        {
            for (auto i : l)
                cout << i.second << " ";
            cout << endl;
        }
    }
    return 0;
}