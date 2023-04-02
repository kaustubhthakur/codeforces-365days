#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  if(n%7==0)
  {
    cout<<n<<endl;
  }
  else 
  {
    int sol=-1;
for(int i=0;i<=9;i++)
{
    if((n-n%10+i)%7==0)
    {
        sol = n-n%10+i;
    }
}
cout<<sol<<endl;
  }
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