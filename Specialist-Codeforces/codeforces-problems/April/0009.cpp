#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int m;
        cin>>m;
        while(m--)
        {
            int cnt;
            int x;
            cin>>x;
int l =0,r=n;
for(int i=0;i<n;i++)
{
    if(a[i]<=x)
    {
        cnt++;
    }
}
        cout<<cnt<<endl;
        }

    }
    return 0;
}