#include <stdio.h>
#include <stdlib.h>

void solve()
{
    long long n, x, y, d;
    scanf("%lld %lld %lld %lld", &n, &x, &y, &d);

    if (abs(y - x) % d == 0)
    {
        printf("%lld\n", abs(y - x) / d);
        return;
    }

    long long min_jumps = -1;

    if ((y - 1) % d == 0)
    {
        long long jumps_to_1 = ((x - 1) + (d - 1)) / d;
        long long jumps_from_1 = (y - 1) / d;
        long long total_via_1 = jumps_to_1 + jumps_from_1;

        min_jumps = total_via_1;
    }

    if ((n - y) % d == 0)
    {
        long long jumps_to_n = ((n - x) + (d - 1)) / d;
        long long jumps_from_n = (n - y) / d;
        long long total_via_n = jumps_to_n + jumps_from_n;

        if (min_jumps == -1 || total_via_n < min_jumps)
        {
            min_jumps = total_via_n;
        }
    }

    printf("%lld\n", min_jumps);
}

int main()
{
    int t;
    if (scanf("%d", &t) == 1)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}