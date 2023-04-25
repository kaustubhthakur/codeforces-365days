#include <iostream>
using namespace std;
int t, n, k, arr[100], brr[100];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a = -1, b = -1, c;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
        {
            cin >> c;
            if (arr[i] + i - 1 <= k)
            {
                if (c > a)
                    a = c, b = i;
            }
        }
        cout << b << endl;
    }
    return 0;
}