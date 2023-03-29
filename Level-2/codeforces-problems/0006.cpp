#include <bits/stdc++.h>
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
        bool flag = (arr[0] == 1);
        for (int i = 1; i < n && flag; i++)
        {
            if (k < arr[i])
                flag = false;
            k += arr[i];
        }

        if (flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }

    return 0;
}
