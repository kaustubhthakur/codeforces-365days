#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
   if(max(0,x-a)+max(0,y-b)<=c)
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
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