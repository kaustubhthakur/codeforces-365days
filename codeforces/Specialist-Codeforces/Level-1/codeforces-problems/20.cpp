#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		
		string p;
		cin>>p;
		sort(p.begin(),p.end());
		if(p[0]==p[3])cout<<-1<<"\n";
		else if(p[0]==p[2] || p[1]==p[3])cout<<6<<"\n";
		else cout<<4<<"\n";
	
	}
    return 0;
}