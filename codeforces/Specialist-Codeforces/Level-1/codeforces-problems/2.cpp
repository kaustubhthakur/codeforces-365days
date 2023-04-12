
#include<bits/stdc++.h>
using namespace std;
int T,n,k,d,w,t[200003];
int main(){

	cin>>T;t[0]=-1e9;
	while(T--){
		cin>>n>>k>>d>>w;
		for(int i=1;i<=n;i++)
			cin>>t[i];
		int lst=0,ans=0;
		for(int i=1;i<=n;i++)
			if(t[i]-w-t[lst]>d||i-lst>=k)
				lst=i,ans++;
		cout<<ans<<endl;
	}
    return 0;
}