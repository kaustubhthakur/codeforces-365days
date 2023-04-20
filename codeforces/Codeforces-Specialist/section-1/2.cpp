#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int cnt = 0;
        string res;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '_')
            {
                if (res.empty() || res.back() != '^')

                    res += "^";
                res += str[i];
            }
            else
                res += str[i];
        }
        if (res.back() == '_')

            res += '^';
        cnt = max((long long)res.size(), 2LL) - str.size();
        cout << cnt << endl;
    }
    return 0;
}