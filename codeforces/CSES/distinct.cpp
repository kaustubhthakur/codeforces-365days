#include <bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int>st;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    cout<<st.size()<<endl;
}