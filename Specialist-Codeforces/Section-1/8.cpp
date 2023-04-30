#include <bits/stdc++.h>
using namespace  std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool flag = false;

int cnt =0;
    for(int i=0;i<n;i++)
    {
        if(a[i+1]>a[i]|| a[i]>a[i+1])
        {
            flag = true;
        }
        else 
        {
if(a[i]>a[i+1])
{
    cnt++;
}
        }
    }
if(flag == true)
{
    cout<<"YES"<<endl;
}
else 
{
    if(cnt%2==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}

}   
return 0; 
} 