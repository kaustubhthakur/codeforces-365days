#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

int cnt=0;
    int total=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>l && a[i]<r)
        {
 cnt++;
total = k-a[i];
i++;
        }
        if(total>0)
        {
            cnt++;
            total= k-a[i];
        }
    }
    cout<<cnt<<endl;
}
}