#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int>v;
int sol =0;
for(int i=0;i<n;i++)
{
if(str[i]=='0')
{
    v.push_back(i);
}
}
for(int i=0;i<(int)v.size()-1;i++)
{
    if(v[i+1]-v[i]<=2)
    {
        sol+=2-(v[i+1]-v[i])+1;
    }
}
cout<<sol<<endl;
    
       
    }
    return 0;
}