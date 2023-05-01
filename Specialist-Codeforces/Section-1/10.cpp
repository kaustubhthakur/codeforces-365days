#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string a,b;
		int n,k,ans=1;
		cin>>n>>k;
		cin>>a;
		for(int i=1;i<n;i++){
			cin>>b;
			if(a==b) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}