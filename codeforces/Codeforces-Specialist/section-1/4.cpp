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
     for(int i=0;i<n;i++)
     {
        int sol = str[i]-'0'+1;
        if(str[sol]<str[sol+1])
        {
            swap(str[sol],str[sol+1]);
        }
        
        cout<<str[i];
    }
    cout<<endl;
}
return 0;
}