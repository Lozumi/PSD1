// UOJ W4-B-2
//简化为字符数量统计
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;
void maopao(int a[], int n);

int main(void)
{
    int t1 = clock();
    char str[100];   //字符串个数不可超过50个字符
    int a[28] = {0}; //存放每个字母出现的次数，下标从0到25分别与字母a至z对应

    cin >> str;            //输入字符串
    int len = strlen(str); //用整型变量len存放输入的字符串的长度，若想使用此句，需包含头文件<cstring>

    //修改每个字母对应的出现次数
    for (int i = 0; i < len; i++)
        a[str[i] - 'a']++; //例如，出现字母c，c-'a'为2，则a[2]增长1

    maopao(a, 28);
    cout << a[0] << endl;

    int t2 = clock();
    cout << t2 - t1 << endl;
    return 0;
}

void maopao(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}