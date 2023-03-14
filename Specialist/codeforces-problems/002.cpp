#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
    cin >> n;
    int known = 0, unknown = 0;
    int need = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 1) ++unknown;
        else {
            known += unknown;
            unknown = 0;
        }
        need = max(need, unknown + (known ? known / 2 + 1 : 0));
    }
    cout << need << endl;
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