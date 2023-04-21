#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum % 2 == 1)
        {
            cout << "Mike" << endl;
            return;
        }
        else
        {
            cout << "Joe" << endl;
            return;
        }
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