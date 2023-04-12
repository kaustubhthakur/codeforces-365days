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
        int ans = (a+b)/2;
        if((a+b)%2==1)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else 
        {
            cout<<(a>>1)<<" "<<((b+1)>>1)<<endl;
        }
    }

    return 0;
}