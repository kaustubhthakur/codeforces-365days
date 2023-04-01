#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    bool flag = false;
    vector<int> a;
    if (n % 2 == 0)
    {
        cout << "-1" << endl;
        return;
    }

    for (int i = 29; i >= 1; i--)
    {
        if ((n >> i) & 1)
        {
            flag = true;
            a.push_back(2);
        }
        else if (flag)
        {
            a.push_back(1);
        }
    }
    cout << a.size() << endl;
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
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