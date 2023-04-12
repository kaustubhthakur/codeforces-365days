#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string str;
 cin>>str;
    if ((str[0] + str[1] + str[2]) == str[3]+str[4]+str[5])
    {
      cout << "YES" << endl;
    
    }
  

 else 
 {
  cout << "NO" << endl;
}
  }
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}