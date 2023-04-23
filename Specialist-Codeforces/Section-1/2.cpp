#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      string str;
      cin>>str;
    if(str.size()==2)
    {
        cout<<str[1]<<endl;
    }
    else 
    {
        cout<<*min_element(str.begin(),str.end())<<endl;;
    }
    }
    return 0;
}