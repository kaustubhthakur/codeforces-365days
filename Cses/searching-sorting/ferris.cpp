#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long ans =0;
    for(int i=0;i<n;i++)
    {
        ans=(a[i]+a[i+1]);
    }
    if(ans<k)
    {
cout<<max(n/2,ans/k)<<endl;
    }
    else 
    {
        cout<<max(n/2,ans/k +1)<<endl;
    }
}