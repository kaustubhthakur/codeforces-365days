#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [] (char c) {
        return tolower(c);
    });
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << (s == "meow" ? "YES" : "NO") << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}