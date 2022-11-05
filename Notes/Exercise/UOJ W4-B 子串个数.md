# 子串个数

## 问题描述

给定一个字符串S

问出现次数最多的子串的出现次数是多少

（子串：若干个连续的元素）

#### 输入

输入为一行，字符串S

S均由小写字母组成

1<=|S|<=100000

#### 输出

输出为1个整数

#### 输入样例 1 

```c
ababc
```

#### 输出样例 1

```c
2
```

#### 提示

该字符串的所有子串有：a,b,c,ab,ba,bc,aba,bab,abc,abab,babc,ababc

出现次数分别是2 2 1 2 1 1 1 1 1 1 1 1



## 题解

#### 思路

**常规思路**

遍历总字符串的所有子串，并分别计数。最后取其中最大的次数输出。

读入总字符串并存入动态数组后有两种形式。一是将子串转化为动态数组后，对齐比较；二是将总字符串转化为子串后，字典比较。

A题使用了思路一，故本题使用思路二。

**优化思路**

引入string类，使用`substr`函数提取子串。由此不再使用动态数组，直接使用字符串操作。

用法为`int i = string.str(start_place,length)`。

#### 源代码

```cpp
// UOJ W4-B
//引入string类函数代替手写轮子
#include <iostream>
#include <string>
//#include <ctime>

using namespace std;

int main(void)
{
    //    int t1 = clock();
    string sMain, sVice, sViceNow;
    int sumNow = 0, sumMax = 0;
    bool flagS = 0;
    //读取总字符串
    cin >> sMain;
    int nMain = sMain.size();        //查询总串长度
    for (int i = 1; i <= nMain; i++) //固定子串长度(步长)i
    {
        for (int j = 0; j <= nMain - i; j++) //确定开始位置j
        {
            sVice = sMain.substr(j, i);

            //已经创建子串，随后计数
            sumNow = 0;
            for (int l = 0; l <= nMain - i; l++) //遍历固定步长的所有子串
            {
                sViceNow = sMain.substr(l, i);
                if (sVice == sViceNow)
                {
                    sumNow++;
                }
            }
            if (sumNow >= sumMax)
                sumMax = sumNow;
        }
    }

    cout << sumMax << endl;
    //    int t2 = clock();
    //    cout << t2 - t1 << endl;
    return 0;
}
```

