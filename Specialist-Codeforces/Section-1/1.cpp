#include <bits/stdc++.h>
using namespace std; 
int n,m; 
int x,y,dx,dy;
int solve(int x,int y)
{
     if((x==1 || x==n) && (y==1 || y==m))
    {
        return 2;
    }
    else if(x==1 || x==n || y==1 || y==m)
    {
        return 3;
    }
    else 
    {
        return 4;
    }
}

int main()
{

int t;
cin>>t;
while(t--)
{
   
    cin>>n>>m;
   
    cin>>x>>y>>dx>>dy;
    cout<<min(solve(x,y),solve(dx,dy))<<endl;
   
}

}