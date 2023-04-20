#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int a,b;
cin>>a>>b;
for(int i=0;i<min(a,b);i++)
cout<<"01";

for(int i=0;i<abs(a-b);i++)
if(a<b)
cout<<1;
else 
cout<<0;

cout<<endl;

    }
    return 0;
}