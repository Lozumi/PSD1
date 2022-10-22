// NOJ T019
#include <stdio.h>

int add(int x, int y);
extern int a = 0, b = 0;

int main(void)
{
    int sum = 0;
    a = 1;
    b = 2;
    for (int i = 1; i <= 20; i++)
    {
        sum = sum;
    }
    return 0;
}

int add(int x, int y)
{
    return x + y;
}