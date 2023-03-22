#include <bits/stdc++.h>
using namespace std;
int main()
{

long long  n,k;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];
cin>>k;
while(k--)
{
long long  x;
cin>>x;
long long cnt=0;
for(int i=0;i<n;i++)
{
    if(a[i]<=x)
    {
        cnt++;
    }
}
cout<<cnt<<endl;
}



}