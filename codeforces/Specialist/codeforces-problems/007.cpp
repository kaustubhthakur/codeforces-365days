#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n, m;
    cin >> n >> m;
    char grid[n][m];
   int min_x=INT_MAX,min_y=INT_MAX;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    {
        cin>>grid[i][j];
        if(grid[i][j]=='R')
        {
            min_x= min(min_x,i);
            min_y=min(min_y,j);
        }
    }
   }
   if(grid[min_x][min_y]=='R')
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
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