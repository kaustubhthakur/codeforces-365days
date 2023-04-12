#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>d||a+d-b<c)
		cout<<-1<<endl;
		else
		cout<<2*d-2*b+a-c<<endl;
	}
	return 0;
}