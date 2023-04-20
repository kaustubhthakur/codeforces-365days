#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    int cost =0;
    int jump=0;
    for(int i=0;i<str.size();i++)
    {
        int ans = str[i]-'0'+1;
        for(int j=str.size()-1;j>=1;j--)
        {
            cost+=min((str[i]-'0'+1)-str[i+1]-'0'+1,0);
            jump++;
        }
    }
    cout<<
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