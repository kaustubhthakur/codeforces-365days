#include <bits/stdc++.h>
using namespace std;
int mex(vector<int> a, int n)
{
    sort(a.begin(), a.end());
    int mex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mex)
        {
            mex += 1;
        }
    }
    return mex;
}
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

        bool flag = 0;
        int val = a[0];
        for (int i = 0; i < n; i++)
        {
            a[i] = val;
        }
        for (int i = 0; i < n; i++)
        {
            if (mex(a, n) == a[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}