#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int t, n, a; cin>>t; while (t--) {
  int l{1}, x{}, p{}; cin>>n;
  int A[n+1]{};
  while (n--) {
   cin>>a;
   l += a<p or (A[a] and A[a]<l);
   if (A[a] and A[a]<l) p=0; else A[p=a]=l;
  }
  for (auto a: A) x+=a and a<l;
  cout<<x<<'\n';
 }
 return 0;
}