#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    int n, sum;
    cin >> n >> sum;
    int one = 0, two = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n ; j >= 1; j--)
        {
            if ((a[i] + a[j]) == sum)
            {
                one = i;
                two = j;
            }
        }
    }
    cout << one << " " << two << endl;
}