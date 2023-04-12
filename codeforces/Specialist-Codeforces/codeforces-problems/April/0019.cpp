#include <bits/stdc++.h>
using namespace std;
long long sol(long long n,long long x,long long y)
{
    return min({x,y,n+1-x,n+1-y});
}
void solve()
{
   int n,x,y,dx,dy;
   cin>>n>>x>>y>>dx>>dy;
   cout<<abs(sol(n,x,y)-sol(n,dx,dy))<<endl;

    
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