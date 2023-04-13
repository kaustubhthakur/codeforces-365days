#include <bits/stdc++.h>
using namespace std;
int main()
{


  int t;
  cin>>t;
  while(t--)
  {
   long long n,m;
   cin>>n>>m;
   if(m==0)
   {
    cout<<0<<endl;
   }
   else 
   {
    cout<<m/(n*n)<<endl;
   }

  }
  return 0;
}