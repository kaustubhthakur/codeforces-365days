#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int  a[N];
void solve()
{
   int n;
   cin>>n;
  
   for(int i=1;i<=n;i++) cin>>a[i];
   
   int pre=1;
   while(pre<n && a[pre]<=a[pre+1])
   {
    pre++;
   }
   int suf=1;
   while(suf<n && a[n-suf]>=a[n-suf+1])
   {
    suf++;
   }
   if(pre+suf>=n)
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