#include<bits/stdc++.h>
using namespace std;
#define int long long
int lans,T,n;
pair<int,int> a[105],ans[3005];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].first;
			a[i].second=i;
		}
		sort(a+1,a+n+1);
		lans=0;
		while(lans<=30*n&&a[1].first!=a[n].first)
		{
			ans[++lans]=make_pair(a[n].second,a[1].second);
			a[n].first=(a[n].first-1)/(a[1].first)+1;
			sort(a+1,a+n+1);
		}
		if(lans>30*n)
		{
			cout<<"-1\n";
			continue;
		}
		cout<<lans<<'\n';
		for(int i=1;i<=lans;i++)
			cout<<ans[i].first<<" "<<ans[i].second<<'\n';
	}
}