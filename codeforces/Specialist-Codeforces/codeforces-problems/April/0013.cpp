#include <bits/stdc++.h>
using namespace std;
int a[10003];
void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<int>b(n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum|=a[i];
    }

cout<<sum<<endl;
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