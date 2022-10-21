// NOJ T015 高精度计算高次幂并截取末三位
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int i, j;
    int a[100000] = {1};
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 100000; j++)
        {
            a[j] *= 2;
        }
        for (j = 0; j < 100000; j++)
        {
            if (a[j] >= 10)
            {
                a[j + 1] += a[j] / 10;
                a[j] = a[j] % 10;
            }
        }
    }
    for (i = 99999; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            for (j = i; j >= 0; j--)
            {
                printf("%d", a[j]);
            }
            break;
        }
    }
    printf("\n");
}