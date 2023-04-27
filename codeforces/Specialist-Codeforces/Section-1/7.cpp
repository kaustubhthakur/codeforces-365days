
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int ans = 1;
		if(s[0] == '0') ans = 0;
		if(s[0] == '?') ans = 9;
		for(int j = 1; j < s.size(); j++)
			if(s[j] == '?')
				ans *= 10;
		cout << ans << endl;
	}
    return 0;
}