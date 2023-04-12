#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long sol = sqrt(n);
   long long l =-1,r=1e9;
   
   while(sol*sol>n)
   {
    sol--;
   }
   while(sol*sol<n)
   {
    sol++;
   }
  cout<<sol-1<<endl;
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