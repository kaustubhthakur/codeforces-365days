#include <bits/stdc++.h>
using namespace std;
int b, k, a, sum;
void solve()
{
    cin >> b >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        sum = (sum * b + a) % 2;
    }
    cout << (sum > 0 ? "odd" : "even") << endl;
}
int main()
{
    solve();
    return 0;
}