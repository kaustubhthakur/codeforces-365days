#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
    cin>>t;
    while(t--)

    {
        long long a,b;
        cin>>a>>b;
        if((a+b)%2==0 || (a+2*b)%2==0)
        {
cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
