#include <iostream>
using namespace std;
int t,n,a[110],f,l;
int main() {
cin>>t;
while (t--) {
cin>>n;
for (int i=1;i<=n;i++) cin>>a[i];
f=1;l=n;
while (f<l&&a[f+1]) f++;
while (l>f&&a[l-1]) l--;
cout<<l-f<<endl;
}
return 0;}