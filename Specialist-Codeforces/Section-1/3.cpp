#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  long long prod=0;
  int maxi =0;
  for(int i=0;i<n;i++)
  {
    for(int j=n-1;j>0;j--)
    {
         maxi = max(a[i]*a[j],0);
         prod = maxi;
    }
  }
  cout<<prod<<endl;
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