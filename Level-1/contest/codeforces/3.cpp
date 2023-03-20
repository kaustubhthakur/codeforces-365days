#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 string str;
 cin>>str;
 map<char,int>strmp;
 for(int i=0;i<n;i++)
 {
   strmp[str[i]]++;
 
 
   
 } 
 for(int i=0;i<n;i++)
 {
    if(str[i]==str[i+1])
    {
        cout<<"NO"<<endl;
        return ;
    }
 }  
 cout<<"YES"<<endl;
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