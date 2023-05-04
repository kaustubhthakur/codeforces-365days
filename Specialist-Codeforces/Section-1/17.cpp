#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int grid[N][N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
       

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> grid[i][j];
            }
        }
       int ans=0;
        bool flag = false;

        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(grid[i][j]!=grid[n+1-i][n+1-j])
                {
                    ++ans;
                }
            }

        }
        ans= ans/2;
        if(ans>k)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            k-=ans;
            if(n&1)
            {
                cout<<"YES"<<endl;
            }
            else if(k&1)
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }
        }
       
    }
    return 0;
}