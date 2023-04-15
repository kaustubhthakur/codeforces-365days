#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       vector<int>a(n);
       for(int i=0;i<n;i++) cin>>a[i];
       vector<int>b(n);
       for(int i=0;i<n;i++) cin>>b[i];
      

      sort(b.begin(),b.end());
      int sol = m;
      for(int i=0;i<n;i++){
        a[i]-=sol;
        a[i] = a[i]-b[i];

      }
      for(auto it :a)
      {
        cout<<it<<" ";
      }
      cout<<endl;
    }
    return 0;
}