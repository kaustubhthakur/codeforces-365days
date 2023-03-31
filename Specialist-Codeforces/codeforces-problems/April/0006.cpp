#include <iostream>
using namespace std;
int t, a, b;
int main()
{
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    int ans = 0, sol = 0;
    for (int i = a; i <= min(b, a + 100); i++)
    {
      int x = i, maxi = 0, mini = 10;
      while (x > 0)
      {
        maxi = max(x % 10, maxi);
        mini = min(x % 10, mini);
        x /= 10;
      }
      if (ans <= maxi - mini)
        ans = maxi - mini,
        sol = i;
    }
    cout << sol << endl;
  }
  return 0;
}