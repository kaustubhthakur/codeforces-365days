#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int prefix[N];
int main()
{

   long long n;
    cin >> n;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];

   }
   sort(a,a+n);
   int m ;
   cin>>m;
   while(m--)
   {
    int x;
    cin>>x;
cout<<upper_bound(a,a+n,x)-a<<endl;
   }
   return 0; 
}