#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int ans = 0;
			int dx = i, dy = j;
			while(dx >= 0 && dx < n && dy >= 0 && dy < m)
			{
				ans+=a[dx][dy];
				dx--;
				dy--;
			}
			dx = i, dy = j;
			while(dx >= 0 && dx < n && dy >= 0 && dy < m)
			{
				ans+=a[dx][dy];
				dx++;
				dy--;
			}
			dx = i, dy = j;
			while(dx >= 0 && dx < n && dy >= 0 && dy < m)
			{
				ans+=a[dx][dy];
				dx--;
				dy++;
			}
			dx = i, dy = j;
			while(dx >= 0 && dx < n && dy >= 0 && dy < m)
			{
				ans+=a[dx][dy];
				dx++;
				dy++;
			}
			ans-=a[dx][dy]*3;
			sum = max(sum, ans);
        }
    }
    cout<<sum<<endl;
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