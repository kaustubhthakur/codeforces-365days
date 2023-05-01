#include <bits/stdc++.h>
int t, n, a, b, c, d, i;

int main()
{
    scanf("%d", &t);
    for (; t--; a = b = c = d = i = 0)
    {
        scanf("%d", &n);
        for (; ++i;)
            if (n < i)
                if (i % 4 < 2)
                    a += n - n / 2, b += n / 2, i = -1;
                else
                    c += n / 2, d += n - n / 2, i = -1;
            else if (i % 4 < 2)
                a += i - i / 2, b += i / 2, n -= i;
            else
                c += i / 2, d += i - i / 2, n -= i;
        printf("%d %d %d %d\n", a, b, c, d);
    }
}
