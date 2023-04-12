#include <bits/stdc++.h>
using namespace std;
void solve()
{
 int n;
 cin>>n;
 if(n==1|| n==4 || n==2)
 {
    cout<<-1<<endl;
 }
 else 
 {
    if (n % 3 == 0) {
		cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
	} else if (n % 3 == 1) {
		cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
	} else {
		cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
	}
 }

}
int main()
{  


    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }



    return 0;
}