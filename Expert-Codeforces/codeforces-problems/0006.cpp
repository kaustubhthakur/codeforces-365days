
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        bool f = (arr[0] == 1);
        for (int i = 1; i < n && f; i++)
        {
            if (k < arr[i])
                f = false;
            k += arr[i];
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
