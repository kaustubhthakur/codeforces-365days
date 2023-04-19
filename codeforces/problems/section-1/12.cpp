#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
string str;
cin>>str;
int cnt=0;
for(int i=0;i<str.length();i++)
{
    if(str[i]=='1')
    {
        cnt++;
    }
}
if(cnt==0)
{
    cout<<str.length()+1<<endl;

}
else if(str.length()-cnt>1 && str[0]==0 && str[n]==0)
{
cout<<0<<endl;
}
else if((str.length()-cnt)==1)
{
    cout<<0<<endl;
}
else if
{
    cout<<cnt<<endl;
}
    }
    return 0;
}