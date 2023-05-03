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

        int j = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[j])
            {
                a[i] = 0;
                cnt++;
            }
            else
            {
                a[j]=a[i]=min(a[i], a[j]);

                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}