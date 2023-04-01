#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+3;
int a[N];
void solve()
{
    int n;
       cin>>n;
       for(int i=1;i<=n;i++)
       cin>>a[i];
       for(int i=1;i<=n;i++)
       {
        if(a[i]<=i)
        {
            cout<<"YES"<<endl;
            return ;
        }
        
       }
       cout<<"NO"<<endl;

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