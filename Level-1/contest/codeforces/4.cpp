#include <bits/stdc++.h>
using namespace std;
int a[200003];
void solve()
{
 int n,q;
 cin>>n>>q;
 int l,r,k;
 for(int i=1;i<=n;i++) cin>>a[i];
while(q--)
{
    int sum =0;
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++)
    {
        a[i] = k;
    }
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    if(sum%2==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}