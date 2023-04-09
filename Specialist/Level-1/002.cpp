#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 0, y = 0;
   for(auto &it :a)
   {
    cin>>it;
   }
   int mini = *min_element(a.begin(),a.end());
    for (int i = 0,k=0; k < n / 2; i++)
    {

       if(a[i]!=mini)
       {
        cout<<a[i]<<" "<<mini<<" ";
        k+=1;
       }
       cout<<endl;
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
