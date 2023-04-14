#include <bits/stdc++.h>
using namespace std;
int main()
{  



    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       vector<int>a(n);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       vector<int>b(n);
       for(int i=0;i<n;i++)
       {
        cin>>b[i];
       }
       sort(b.begin(),b.end());
       int updated=m;
       bool flag =false;
       for(int i=0;i<n;i++)
       {
        a[i]= a[i]-updated;
        updated= m-b[i];
      flag = true;   
         }
         if(flag==true)
         {
            cout<<"YES"<<endl;
         }
         else 

         {
            cout<<"NO"<<endl;
         }
    }



    return 0;
}