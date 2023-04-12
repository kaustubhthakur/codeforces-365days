#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n-1);
 vector<int>b;
 for(int i=0;i<n-1;i++)
{
    cin>>a[i];
  
    }
     b.emplace_back(a[0]); 
for(int i=0;i<n-2;i++)
{
    b.emplace_back(min(a[i],a[i+1]));
}
b.emplace_back(a[n-2]);
for(auto &it:b)
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