#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        int i, j;
        for (i = 1; i <= n; i++, cout << "\n")
            for (j = 1; j <= n; j++)
                if ((i + j - r - c) % k == 0)
                    cout << "X";
                else
                    cout << ".";
    }
    return 0;
}