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

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                a[i]++;
            }
        }
        for (int i = 1; i < n; ++i)
        {
            if (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }
       
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout<<endl;
    }

    return 0;
}