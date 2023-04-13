#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0,cnt=0;
    while(i<n || j<m)
    {
        if(a[i]==b[i])
        {

            cnt++;
            i++;
         j++;
        }
        else{
            cnt++;
            i++;   
        j++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}