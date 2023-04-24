#include <bits/stdc++.h> 
using namespace std ;
int main()
{

 int t;
 cin>>t;
 while(t--)
 {
    int n,b,x,y;
    cin>>n>>b>>x>>y;
    long long  sum=0;
    vector<int>a(n);
    a[0]=0;
    long long cur=0,ans=0;
for(int i=1;i<=n;i++)
{
    if(cur+x<=b)
    {
        cur+=x;
    }
    else 
    {
        cur+=(-y);
    }
    ans+=cur;


}
    cout<<ans<<endl;
 }

}