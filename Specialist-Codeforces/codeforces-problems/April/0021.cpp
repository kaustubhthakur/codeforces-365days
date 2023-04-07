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
        int maxa=INT_MIN,maxb=INT_MIN;
        vector<int>a(n);
        for(int i=0;i<n ;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);
            }
            maxa= max(maxa,a[i]);
            maxb = max(maxb,b[i]); 
        }
        cout<<maxa*maxb<<endl;
    }
    return 0;
}