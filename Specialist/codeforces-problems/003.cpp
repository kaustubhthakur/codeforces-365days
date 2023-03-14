#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	for(int test_number = 0; test_number < t; test_number++){
		int n; cin >> n;
		vector <string> long_subs;
		for(int i = 0; i < 2 * n - 2; i++){
			string s; 
			cin >> s;
			if((int)s.size() == n - 1){
				long_subs.push_back(s);
			}
		}
		reverse(long_subs[1].begin(), long_subs[1].end());
		if(long_subs[0] == long_subs[1]){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	
	return 0;
}