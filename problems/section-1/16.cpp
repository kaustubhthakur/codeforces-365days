#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,i,h;
	cin>>t;
	while(t--){
	cin>>n>>k;
	pair<int,int>a[n];
	for( i=0;i<n;i++)cin>>a[i].second;
	for( i=0;i<n;i++)cin>>a[i].first;
	sort(a,a+n);
	h=0;
	for( i=0;i<n&&k>0;){
	     h+=k;
	     while(a[i].second<=h&&i<n)i++;
	     k-=a[i].first;
}
if(i==n)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
}