#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  set<int>st;
  vector<int>a(n);
  for(int i=0;i<n;i++) 
  {cin>>a[i];
st.insert(a[i]);
  }
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>=a[i+1])
    
    {
        a[i]=0;
cnt++;
    }
  }  
  cout<<cnt<<endl;
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