#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<0<<" "<<0<<endl;
    }
    else 
    {
cout<<1<<" "<<m/n<<endl;
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