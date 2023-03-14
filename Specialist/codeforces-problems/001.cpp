#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    int likes=0,dislikes=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            likes++;
        }
        else 
        {
            dislikes++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i<=likes)
        {
            cout<<i<<" ";
        }
        else 
        {
            cout<<likes*2-i<<" ";
        }
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i<=dislikes*2)
        {
            cout<<i%2<<" ";
        }
        else 

        {
            cout<<i-dislikes*2<<" ";
        }
    }
   }

    return 0;
}