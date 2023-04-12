#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    set<int> st;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
      st.insert(a[i]);
      sum+=st[i];
    }
    long long cost = 0;
    int ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cost += a[0]
    }
    cout << cost << endl;
    return 0;
}