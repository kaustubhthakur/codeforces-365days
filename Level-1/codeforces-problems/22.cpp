#include <bits/stdc++.h>
 
using namespace std;
 
bool took[1005];
int p[1005];
 
int main()
{
 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        for (int i=1;i<=n;i++) cin>>p[i];
        for (int i=1;i<=n;i++) took[i]=0;
        
        if (n==1)
        {
            cout<<"-1\n";
            continue;
        }
 
        for (int i=1;i<=n-2;i++)
        {
            int k=1;
            while (took[k] || k==p[i]) ++k;
            cout<<k<<" "; took[k]=1;
        }
 
        int a=-1,b=-1;
        for (int i=1;i<=n;i++) if (!took[i])
        {
            if (a==-1) a=i;
            else b=i;
        }
 
        if (a!=p[n-1] && b!=p[n]) cout<<a<<" "<<b<<"\n";
        else cout<<b<<" "<<a<<"\n";
    }
}