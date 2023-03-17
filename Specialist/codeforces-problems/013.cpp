#include <bits/stdc++.h>
#define gam(i,x,y) for(int i=x;i<=y;++i)
using namespace std;
int z[300];
int main()
{
	int t;cin>>t; 
	while(t--)
	{
		int a,b,r1=0,r2=0;string c;
		cin>>a>>b>>c;
		fill(z,z+200,0);
 		gam(i,0,a-1)z[(int)c[i]]++;
 		gam(i,65,90)r1+=min(z[i],z[i+32]),r2+=z[i]+z[i+32]>>1;
 		cout<<min(r1+b,r2)<<endl;
	} 
    return 0;
}