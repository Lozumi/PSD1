// NOJ T023 合数世纪
#include <stdio.h>
#include <math.h>

int isH(int n);

int main(void)
{
    int n = 0, cn = 0;
    scanf("%d", &n);
    for (int cc = 1;; cc++)
    {
        if (isH(cc) == 1)
        {
            cn++;
        }
        else
            continue;
        if (cn == n)
        {
            printf("%d %d", (n - 1) * 100, n * 100 - 1);
            break;
        }
    }
    return 0;
}

int isH(int cc)
{
    for (int i = (cc - 1) * 100; i <= cc * 100 - 1; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                return 0;
        }
    }
    return 1;
}