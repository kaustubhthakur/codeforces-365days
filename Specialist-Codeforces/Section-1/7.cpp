#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = (n + 1) * (n + 1);
        cout << ans + 1 << endl;
    }
    return 0;
}