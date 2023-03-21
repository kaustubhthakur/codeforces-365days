#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n,m;
 cin>>n>>m;
 vector<int>a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 while(m--)
 {
    int x;
    cin>>x;
    int sol = find(a.begin(),a.end(),x)-a.begin();
    cout<<sol+1<<endl;
    rotate(a.begin(),a.begin()+sol,a.begin()+sol+1);
 }
}
int main()
{

 solve();
 
 
return 0;
}