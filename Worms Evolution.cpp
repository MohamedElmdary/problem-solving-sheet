#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            int sum = a[i] + a[j];
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                if (sum == a[k])
                {
                    printf("%d %d %d\n", k + 1, j + 1, i + 1);
                    return 0;
                }
            }
        }
    }

    printf("-1\n");
    return 0;
}