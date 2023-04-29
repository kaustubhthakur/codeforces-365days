#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin>>n;
ll a[n];
  
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }

  sort(a,a+n);
  ll maxi = a[0]*a[1];
  ll ans = a[n-1]*a[n-2];
 cout<<max(maxi,ans)<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}