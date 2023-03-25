#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];

  set<int>st;
  for(int i=0;i<n;i++)
  {
    st.insert(a[i]);
  }
  if((st.size()-1)==n)
  {
    cout<<"NO"<<endl;
  }
  else 
  {
    cout<<"YES"<<endl;
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