#include <bits/stdc++.h>
using namespace std;
int t;
main()
{
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int k = -1, ans = INT_MIN;
        s = s + s;
        for (int i = s.length(); i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                k = i;
            }
            if (s[i] == c)
            {
                ans = max(ans, k - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}