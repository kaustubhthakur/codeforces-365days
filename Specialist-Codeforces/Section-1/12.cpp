#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long Awhite=1,Ablack=0,Bwhite=0,Bblack=0;
     for(int i=2;i<=n;i+=i)
     {
        for(int j=1;i<=2;j++)
        {
            if(i%2==0)
            {
                Bblack++;
            }
            else 
            {
                Bwhite++;
            }
        }
     }
    }
    return 0;
}