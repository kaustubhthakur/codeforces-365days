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
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mini =INT_MAX,maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,a[i]);
            maxi = max(maxi,a[i]);
                    }
        
        cout<<maxi-mini<<endl;
    }
    return 0;
}