#include <bits/stdc++.h>
using namespace std;
int k, n, t, x, y;
int main()
{
	
    cin>>t;
	while(t--)
	{
		cin >> n >> x >> y;
		if(x > y)
        swap(x, y);
		if(x || !y || (n - 1) % y)
		{
			cout << -1 << endl;
			continue;
		}
		for(int k = 2; k <= n; k += y)
		{
			for(int i = 1; i <= y; i++)cout << k << ' ';
		}
		cout << endl;
	}
    return 0;
}