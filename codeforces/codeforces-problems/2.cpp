#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll i, j, k, n, t, a[100500];

int main()
{

  cin >> t;
  while (t--)
  {
    cin >> n;
    k = 0;
    for (i = 1; i <= n; i++)
    {
      cin >> a[i];
      if (a[i] < 0)
      {
        a[i] *= -1;
        k++;
      }
    }
    for (i = 1; i <= k; i++)
      a[i] = -a[i];
    cout << ((is_sorted(a + 1, a + n + 1)) ? "YES" : "NO") <<endl;
  }
}