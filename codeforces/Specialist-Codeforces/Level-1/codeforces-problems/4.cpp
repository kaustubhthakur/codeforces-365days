#include <bits/stdc++.h>
using namespace std;
signed main(){
    int T,n;
    cin>>T;while(T--){
        int x,s=0,y=1,z=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>x,s+=!x,y&=(x<2),z|=(x==1);
        cout<<(s>(n+1)/2)*(1+y*z)<<'\n';
    }
    return 0;
}