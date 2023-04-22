#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin>>k;
        int a[4];

        for(int i=1;i<=3;i++)
        {
            cin>>a[i];
        }
        if (a[a[k]]!=0 && a[k]!=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}