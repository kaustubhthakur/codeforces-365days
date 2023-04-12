#include <bits/stdc++.h>
using namespace std;
long long t, n, m, i, j;
int main()
{
    cin >> t;
    while (t--)
    {
        long long sum = 0;
        cin >> n >> m;
        int a[m + 1][n + 1];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> a[j][i];
        for (i = 0; i < m; i++)
        {
            sort(a[i], a[i] + n);
            for (j = 0; j < n; j++)
                sum += a[i][j] * (1 + 2 * j - n);
        }
        cout << sum << endl;
    }
   
}