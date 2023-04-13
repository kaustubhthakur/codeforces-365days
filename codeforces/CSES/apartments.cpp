#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,m,k;
 cin>>n>>m>>k;
 vector<int>a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 vector<int>b(m);
 for(int i=0;i<n;i++) cin>>b[i];
int cnt=0;
 for(int i=0;i<n;i++)
 {
    for()
if((a[i]==b[i]) ||((a[i]-m)==b[i]) ||((a[i]+m)==b[i]) )
{
    cnt++;
}

 
 }
 cout<<cnt<<endl;
}