#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int n;
cin>>n;
for(int i=1;i<=n;i++)
cin>>a[i];

int maxi=INT_MIN;
sort(a,a+n);
for(int i=1;i<=n;i++)
{
    if(a[i]<0 && a[i+1]<0)
    {
        maxi = max(maxi,abs(a[i])*abs(a[i+1]));
    }
    else
    {
        maxi = max(maxi,a[i]*a[i+1]);
    }

}
cout<<maxi<<endl;
 
    }
return 0;
}