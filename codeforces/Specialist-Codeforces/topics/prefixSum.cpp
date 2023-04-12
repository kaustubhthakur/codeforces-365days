#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int arr[N];
int prefix[N];
int main()
{
    int n,m;
    cin >> n>>m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int i=0;i<n;i++)
    {
        cout << prefix[i] << " ";
    }
    for(int i=0;i<m;i++)
    {
        int l ,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l]<<endl;
    }

    return 0;
}