#include <bits/stdc++.h>
using namespace std;
int w, h, n;
vector<int> a(n);
bool good(int x)
{
    return (x / w) * (x / h) >= n;
}

int main()
{
    cin >> w >> h >> n;
    


    int l = 0, r = 100;
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;

    return 0;
}