# 洛衣的C++学习笔记 基础篇

# 概述

这里是Lozumi。为了在第三学期转入计科后尽快适应学习环境，紧跟学习节奏，我决定在第一、二学习并掌握数门编程语言，C++首当其冲。

正如 *C++ Primer* 所言，在C++11发布后，C++这门悠久的编程语言正在走向完美。基于C，拥有强大的抽象能力，包含五种编程范型而不拘泥，拥有开源社区积极维护，都使得C++语言的生命长盛不衰。因此，在我系统学习计算机技能的事务清单上，C++排位榜首。

我会通过这篇博文记录C++的学习过程，包括但不限于模块重点、术语清单、习题以及个人感受和收获。在记录这段激情时光的同时，或许也能给看到这篇博文的读者提供些许帮助。

为了宇宙机的追求而奋斗。

博客：[洛衣博客](https://www.lozumi.com)

哔哩哔哩：[@Lozumi](https://space.bilibili.com/8553736)

GitHub：[@Lozumi](https://github.com/Lozumi)

洛谷：[@Lozumi](https://www.luogu.com.cn/user/52613)

# 准备工作

## 一、参考资料

学习总是需要教材的，我筛选出以下资料进行阅读。

1. Stanley B. Lippman等 - C++ Primer（第五版） 入门必备书目 | [Z-Lib](https://zh.b-ok.global/book/5424113/627ff0)
2. Scott Meyers - Effective C++三部曲 | [Z-Lib](https://zh.b-ok.global/book/18068185/fe306c)
3. （网课）黑马 - C++教程 | [哔哩哔哩](https://www.bilibili.com/video/BV1et411b73Z)

在C++ Primer和C++ Primer Plus之间，我选择了前者，原因再说。

## 二、环境配置

（1）学习记录

* 洛衣博客 进行文字记录
* GitHub 进行自动同步

（2）开发环境

* VS Code 日常开发环境
* Code Blocks 课程要求开发环境
* Git 同步仓库
* Notepad++ 快速阅读、修改代码
* Typora 写点笔记

（3）常用应用

* GitHub 如上
* 洛谷 练手、打比赛
* NOJ 课程练习
* CodeForces 练手
* 梯子 懂得都懂 0.0

## 三、相关配置

### VS Code配置

1.在官网下载VS Code [Visual Studio Code - Code Editing. Redefined](https://code.visualstudio.com/)

![VSC首页](https://s1.lozumi.com/typecho/uploads/2022/09/2425314224.png)

2.安装后，添加简中插件、C++环境

![C/C++环境](https://s1.lozumi.com/typecho/uploads/2022/09/4090205102.png)

![简中插件](https://s1.lozumi.com/typecho/uploads/2022/09/1289726022.png)

<<<<<<< HEAD
### Git配置
=======
#### Git配置
>>>>>>> fdd0b990143e5fb1431d47a01994b6920713b23e

1.下载Git | [官网](https://git-scm.com/download/win)

2.在VSC中关联Git：点击左下角小齿轮，搜索框输入`shell:windows`，点击“在seetings.json中编辑”，添加代码``"git.path": "D:\\Git\\cmd\\git.exe",``（git地址按实际情况填写，双左斜杠分隔，不可带有汉字）和`"terminal.integrated.shell.windows": "C:\\W\\Git(可用)\\Git\\bin\\bash.exe"`，保存并重启。

![添加git位置](https://s1.lozumi.com/typecho/uploads/2022/09/2912015924.png)

3.代理设置：Git的代理要单独设置，此处以Clash为例。

* http 和 https 协议的 git 代理

第一种：设置所有 git 操作都走 clash 代理

```
// 添加代理
git config --global http.proxy socks5://127.0.0.1:7890
git config --global https.proxy socks5://127.0.0.1:7890

// 取消代理
git config --global --unset http.proxy
git config --global --unset https.proxy
```

第二种：仅 github.com 走 clash 代理，因为可能有的朋友公司内网的 git 仓库无需走代理

```
// 添加代理
git config --global http.https://github.com.proxy socks5://127.0.0.1:7890
git config --global https.https://github.com.proxy socks5://127.0.0.1:7890

// 取消代理
git config --global --unset http.https://github.com.proxy
git config --global --unset https.https://github.com.proxy
```

* ssh 协议的 git 代理

请参考文章：[网络代理 &amp; Github 加速 &amp; npm 加速 - 简书 (jianshu.com)](https://www.jianshu.com/p/709c6853cc42)。

<<<<<<< HEAD
# 学习笔记

> Sep.16,2022

## CPPP

今天开始学习*C++ Primer*（下简称“CPPP”），计划在10月底前阅读并完成习题。

### Chapter.1 开始

#### 1.3 注释简介
=======
## 学习笔记

### Sep.16 CPPP Chapter.1

今天开始学习*C++ Primer*（下简称“CPPP”），计划在10月底前阅读并完成习题。

> **Chapter.1 开始**
>
> 1.3 注释简介
>>>>>>> fdd0b990143e5fb1431d47a01994b6920713b23e

<1>在C++中有两种注释：单行注释和界定符对注释。
单行注释以双斜线`//`开始，以换行符结束。
注释界定符继承自C，以`/*`开始，`*/`结束。注意，当注释界定跨越多行时，约定显式指出其内部的程序航都属于多行注释的一部分，一般在注释内的每一行以星号开头。

注释界定符不能嵌套。
示例：

```
// 这是一个单行注释
/*
 * 这是一个多行注释。
 * 在每一行的开头使用星号以注明。
 */
```

> 练习1.7

```
int main()
{
    //听说可以嵌套注释？
    /* 外层~
     * /*内层~*/
     *
     * 
     */
    return 0;
}
```

输出如下：

```
E:\CS Proj\PSD1\Codes\CPPP\Chapter.1\E1.7.cpp: In function 'int main()':
E:\CS Proj\PSD1\Codes\CPPP\Chapter.1\E1.7.cpp:8:7: error: expected primary-expression before '/' token
      */
       ^
E:\CS Proj\PSD1\Codes\CPPP\Chapter.1\E1.7.cpp:9:5: error: expected primary-expression before 'return'
     return 0;
     ^~~~~~
```

可知，在line 5的`*/`之后的注释被视为源码，导致编译失败。

> 练习1.8

```
#include <iostream>
using namespace std;

int main()
{
    cout << "/*";
    cout << "*/";
    cout << /* "*/" */;
    cout << /* "*/" /* "/*" */;
    return 0;
}
```

输出如下：

![image.png](https://s1.lozumi.com/typecho/uploads/2022/09/1198020532.png)

![报错](https://s1.lozumi.com/typecho/uploads/2022/09/2687161846.png)

可以看到，`/*`和`*/`一一对应。

<<<<<<< HEAD
#### 1.4 控制流
=======
> 1.4 控制流
>>>>>>> fdd0b990143e5fb1431d47a01994b6920713b23e

1.while语句形式为

```
while (condition)
	statement
```

2.for语句形式为

```
for (init-statement;condition;expression)
	statement
```

3.if语句形式为

```
if (condition)
	statement;
else if (condition)
	statement;
else if (condition){
	statement
};
...
else statement;
```

另外，C++中有三目运算符，形式为

```
<表达式1>？<表达式2> ：<表达式3>
```

它的意思是：先执行表达式1,如果1为真则执行表达式2，否则执行表达式3，三目运算符常常用来代替if .... else....语句。

<<<<<<< HEAD
### **Chapter.2 变量和基本类型**

#### 2.1 基本内置类型
=======
> **Chapter.2 变量和基本类型**
>
> 2.1 基本内置类型
>>>>>>> fdd0b990143e5fb1431d47a01994b6920713b23e

1.算术类型


| **类型**      | **含义**           | **大小**         |
| --------------- | -------------------- | ------------------ |
| `bool`        | **布尔类型**       | **未定义**       |
| `char`        | **字符**           | **8位**          |
| `wchar_t`     | **宽字符**         | **16位**         |
| `char16_t`    | **Unicode字符**    | **16位**         |
| `char32_t`    | **Unicode字符**    | **32位**         |
| `int`         | **整型**           | **16位**         |
| `long`        | **长整型**         | **32位**         |
| `long long`   | **长整型**         | **64位**         |
| `float`       | **单精度浮点数**   | **6个有效数字**  |
| `double`      | **双精度浮点数**   | **10个有效数字** |
| `long double` | **扩展精度浮点数** | **10个有效数字** |

（1）数据类型long long是C++11中新定义的。

（2）类型int、short、long和long long带符号，可以加unsigned得到无符号类型。char可表示signed char或unsigned char，具体由编译器决定。

<<<<<<< HEAD
---

> Sep.18,2022
=======
### Sep.18 Chapter.2
>>>>>>> fdd0b990143e5fb1431d47a01994b6920713b23e

#### 2-2 变量和基本类型

1. 数据类型是程序的基础，它告诉我们数据的意义以及我们能在数据上执行的操作。
2. 类型转换
   （1）把非布尔类型的算术值赋给布尔类型时，初始值为0则为false，否则为true。
   （2）把一个布尔值赋给一个非布尔类型时，进行取整。
   （3）赋给无符号类型一个超出数值范围的值时，结果是初始值对无符号类型数值总数取模后的余数。
   （4）赋给带符号类型一个超出数值范围的值时，结果是**未定义**的。
3. 含无符号类型的表达式
   （1）无符号数减到负数值时，会转换为数值范围减去（负数值对数值范围的模）的模。
   （2）当从无符号数中减去一个值时，不管这个值是不是无符号数，应确保结果不是负值（否则会被取模）。

---

> Sep.19.2022

#### 2.1.3 字面值常量

1. 十进制字面值是带符号数，类型为**能容纳其数值**的int、long、long long中最小的。
2. 八进制和十六进制字面值可能是带符号的，也可能是无符号的；类型为**能容纳其数值**的int、unsigned int、long、unsigned long、long long和unsigned long long中最小的。
3. 编译器在每个字符串的结尾处加一个空字符，故字符串字面值的实际长度比它的内容多1。
4. C++转义序列

   ![RT](https://s1.lozumi.com/typecho/uploads/2022/09/3223462879.png)

#### 2.2 变量

1. 在多个文件中使用同一个变量，变量的定义**必须出现且只能出现在**一个文件中，其他用到改变量的文件都必须对其声明。
2. C++变量命名规范

   1. 在名称中只能使用字母字符、数字和下划线（_）;
   2. 名称的第一个字符不能是数字；
   3. 区分大写字符和小写字符；
   4. 不能将C++关键字用作名称，如 int double return…；
   5. 以两个下划线打头或者以下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用。以一个下划线开头的名称被保留给实现，用作全局标识符；
   6. C++对于名称的长度没有限制，名称中的所有字符都有意义，但是有些平台有长度限制
3. 同一个名字在不同作用域可能指向不同实体。
