#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()

ll calc(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = sz(a) - 1; i >= 0; --i) {
        if(a[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    ll ans = calc(a);
    forn(i, n) {
        if(a[i] == 0) {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == 1) {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << "\n";
}   
 
int main() {
   
    int t ;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}