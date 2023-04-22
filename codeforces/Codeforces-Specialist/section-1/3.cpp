#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    int small=0;
    if(n%2==1)
    {
        cout<<"Mike"<<endl;
    }
    else 
    {
        for(int i=0;i<n;++i)
        {
            if(a[i]<a[small])
            {
                small=i;
            }
        }
        if(small%2==0)
        {
            cout<<"Joe"<<endl;
        }
        else 
        {
            cout<<"Mike"<<endl;
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}