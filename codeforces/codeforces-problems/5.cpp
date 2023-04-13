#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
 
    set<int>st;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
st.insert(a[i]);
st.insert(a[i]+1);
    }
    int ct=0;
    int res=0;
    for(auto x:st)
    {
        int ans = mp[x];
        res+=max(ans-ct,0);
        ct = ans;
    }
    cout<<res<<endl;
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