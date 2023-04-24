#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int m;
        cin >> m;
        int b;
        int sum = 0;
        for (int i = 1; i <= m; i++)
        {
            cin >> b;
            sum = (b + sum) % n;
        }

        cout << a[sum] << endl;
    }

    return 0;
}