#include <bits/stdc++.h>
using namespace std;
int mini = INT_MIN;
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int>a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int ans=0;
 for(int i=0;i<m;i++)
 {
    int x;
    cin>>x;
for(int j=0;j<n;j++)
{
    if(a[j]<=x)
    {
        if(a[j]<a[j+1] && a[j+1]<=x)
        ans = a[j+1];
    
    }
    else 
    {
        ans = -1;
    }
   
}
 cout<<ans<<endl;
 }



}