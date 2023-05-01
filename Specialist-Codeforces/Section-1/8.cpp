#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    int arr[n];
    long long int altsum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i%2==0){
            altsum-=arr[i];
        }
        else{
            altsum+=arr[i];
        }
    }
    if(n%2==1||altsum>=0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    }

    return 0;
}