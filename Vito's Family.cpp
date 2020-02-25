#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int r;
        scanf("%d", &r);
        int a[r];
        for (int i = 0; i < r; i++)
        {
            scanf("%d", &a[i]);
        }
        std::sort(a, a + r);
        const int mid = a[r / 2];
        long long int d = 0;
        for (int i = 0; i < r; i++)
        {
            d += abs(mid - a[i]);
        }
        printf("%d\n", d);
    }
    return 0;
}