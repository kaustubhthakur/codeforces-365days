#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n%2)
        {
            cout<<"-1"<<endl;
        }
        else 
        {
            int a[n];
            iota(a,a+n,1);
            for(int i=0;i<n;i+=2)
            {
                swap(a[i],a[i+1]);

            }
            for(auto it:a)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}