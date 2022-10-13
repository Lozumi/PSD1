// EOJ T2-11
#include <stdio.h>

int main(void)
{
    float a1, a2;
    scanf("%f %f", &a1, &a2);
    if ((3.9 <= a1 && a1 <= 6.1) && (3.9 <= a2 && a2 <= 7.8))
        printf("诊断结果：血糖正常！");
    else if (a1 <= 2.8 || a2 <= 2.8)
        printf("诊断结果：低血糖！");
    else if (a1)
        else
        {
            if (6.1 < a1 && a1 < 7)
            {
                if (a2 <= 7.8 || a2 >= 11)
                    printf("诊断结果：空腹血糖受损！");
                else if (7.8 < a2 && a2 <= 11)
                    printf("诊断结果：空腹血糖受损且糖耐量异常！");
            }
            else if ((7.8 < a2 && a2 <= 11) &&)
            {
                if (a2 <= 7.8 || a2 >= 11)
                    printf("诊断结果：空腹血糖受损！");
                else if (7.8 < a2 && a2 <= 11)
                    printf("诊断结果：空腹血糖受损且糖耐量异常！");
            }
        }
}