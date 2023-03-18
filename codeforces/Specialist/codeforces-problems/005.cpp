#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(a[i+1]%a[i]==0)
        {
            a[i] = a[i]*2;
            a[i+1]++;
        }
    }
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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