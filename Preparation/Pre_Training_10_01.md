# 程序设计基础 / C快速入门


>- [程序设计入门——C语言](https://www.icourse163.org/course/ZJU-199001)

>- 课程对应 `PTA题集邀请码`: `9418336228c8c09f`

本大纲使用的所有题目来自

>- [PTA 基础编程题目集](https://pintia.cn/problem-sets/14/problems/type/6)

>- [基础编程题目集 AC代码](https://github.com/Class-17/PTA-Notes)



---

## 1. 基础数据类型

### 1.1 变量的定义与类型

>- `int, long long, double, char`

### 1.2 强制类型转换

**标准形式**：
>- `(typename)expression`

**示例**：

>- `int(a)`
>- `char(ch + 32)`

### 1.3 符号常量和 const 常量

**标准形式**：
>- `#define name replacement-list`

**示例**：
>- `#define pi 3.14`
>- `#define swap(a, b) {a = a + b, b = a - b, a = a - b;}`

**标准形式**：
>- `const typename variable = value`

**示例**：
>- `const double pi = 3.14`

### 1.4 运算符

**算术运算符**

>- `+, -, *, /, %, ++, --`


**关系运算符**

>- `<, >, <=, >=, ==, !=`


**逻辑运算符**

>- `&&, ||, !`

**条件运算符**

>- `expression ? expression : expression`

**示例**：

>- `a > b ? max = a : max = b`

**运算符优先级及计算顺序**

|运算符|计算顺序|
|:---:|:---:|
|`* / %`|从左到右|
|`+ -`|从左到右|
|`== !=`|从左到右|
|`&&`|从左到右|
|`||`|从左到右|
|`?:`|从右到左|
|`=`|从右到左|


---

## 2. 顺序结构

### 2.1 赋值表达式

**标准形式**

>- `expression = expression op expression`;

**示例**：

>- `sum = a + b`

### 2.2 输入输出


#### 使用 `scanf` 函数输入

**函数标准格式**：

>- `int scanf ( const char * format, ... )`

其中 `format` 标准格式为：

>- `%[*][width][length]specifier`

**常用 `scanf` 形式**

>- `scanf("格式控制", 变量地址)`

**示例**:

>- `scanf("%d", &a)`

**常用数据类型变量 `scanf` 格式符**：

|数据类型|格式符|
|:---:|:---:|
|`int`|`%d`|
|`long long`|`%lld`|
|`double`|`%lf`|
|`char`|`%c`|


#### 使用 `printf` 函数输出

**函数标准格式**：

>- `int printf ( const char * format, ... )`

其中 `format` 标准格式为:

>- `%[flags][width][.precision][length]specifier`

**常用 `printf` 形式**：

>- `printf("格式控制", 变量名称/常量)`

**示例**：

>- `printf("%d", n)`
>- `printf("%f", 1.0)`

**常用数据类型变量 `printf`格式符**：

|数据类型|格式符|
|:---:|:---:|
|`int`|`%d`|
|`long long`|`%lld`|
|`double`|`%f`|
|`char`|`%c`|


### 要求与题目练习

**基础要求**
>- 会使用基本运算符和基础数据类型进行算数运算.
>- 会使用 `scanf/printf` 按照要求格式输出


**基础习题**
>- [7-1 厘米换算英尺尺寸][7-1]
>- [7-2 然后是几点][7-2]
>- [7-3 逆序的三位数][7-3]
>- [7-4 BCD解密][7-4]
>- [7-5 表格输出][7-5]
>- [7-6 混合类型数据格式化输入][7-6]


---

## 3. 选择结构

### 3.1 `if` 语句

### 3.2 `if` 语句的嵌套

### 3.3 `switch` 语句


### 要求与题目练习

**基础要求**
>- 会使用条件语句进行简单逻辑判断.

**进阶挑战**
>- **进阶**：进行复杂逻辑判断与情况分类讨论


**基础习题**
>- [7-7 12-24小时制][7-7]
>- [7-8 超速判断][7-8]
>- [7-9 用天平找小球][7-9]
>- [7-10 计算工资 ][7-10]
>- [7-11 分段计算居民水费][7-11]
>- [7-12 两个数的简单计算器][7-12]

**进阶习题**
>- [7-13 日K蜡烛图][7-13]


---

## 4. 循环结构

### 4.1 `while` 语句

### 4.2 `do ... while` 语句

### 4.3 `for` 语句

### 4.4 `break` 和 `continue` 语句

### 4.5 二重循环/多重循环的使用

>- 打印图形，输出`a ~ b` 之间的素数


### 要求与题目练习

**基础要求**
>- 使用循环进行简单循环求解
>- 使用二重循环进行简单问题求解
>- 会使用条件语句进行循环控制


**进阶挑战**
>- 熟练使用循环求解问题
>- 根据题目逻辑，进行较复杂的循环控制


**基础习题**
>- [7-14 求整数段和][7-14]
>- [7-15 计算圆周率][7-15]
>- [7-20 打印九九口诀表][7-20]

**进阶习题**
>- [7-16 求符合给定条件的整数集][7-16]
>- [7-17 爬动的蠕虫][7-17]
>- [7-18 二分法求多项式单根][7-18]
>- [7-19 支票面额][7-19]
>- [7-21 求特殊方程的正整数解][7-21]
>- [7-24 约分最简分式][7-24]
>- [7-33 有理数加法][7-33]

**复合进阶题**

>- [7-22 龟兔赛跑][7-22]
>- [7-35 有理数均值][7-35]


---

## 5. 数组

### 5.1 一维数组

### 5.2 字符数组与字符串

### 5.3 二维数组

### 5.4 简单排序


### 要求与题目练习

**基础要求**
>- 会使用一维数组进行求和与遍历的简单操作
>- 会读入输出和简单处理字符串
>- 掌握冒泡排序和选择排序

**进阶挑战**
>- 能够完成略微复杂的数组逻辑操作
>- 能够完成略微复杂的字符串操作

**基础习题**
>- [7-25 念数字][7-25]
>- [7-26 单词长度][7-26]
>- [7-27 冒泡法排序][7-27]


**进阶习题**
>- [7-28 猴子选大王][7-28]
>- [7-29 删除字符串中的子串][7-29]
>- [7-30 字符串的冒泡排序][7-30]
>- [7-31 字符串循环左移][7-31]


**复合进阶题**
>- [7-32 说反话-加强版][7-32]
>- [7-38 数列求和-加强版][7-38]


---

## 6. 函数

### 6.1 `void` 类型函数与带有返回值的函数

### 6.2 函数参数

### 6.3 变量作用域与全局变量

### 6.4 函数嵌套调用与递归调用

### 要求与题目练习

**基础要求**
>- 会根据要求编写函数
>- 会根据变量作用域，正确定义变量
>- 理解函数嵌套调用

**进阶挑战**
>- 熟练掌握编写函数技巧
>- 灵活使用函数
>- 理解函数递归


**基础习题**
>- [6-1 简单输出整数][6-1]
>- [6-2 多项式求值][6-2]
>- [6-3 简单求和][6-3]
>- [6-4 求自定类型元素的平均][6-4]
>- [6-5 求自定类型元素的最大值][6-5]
>- [6-8 简单阶乘计算][6-8]
>- [6-9 统计个位数字][6-9]
>- [6-12 判断奇偶性][6-12]

**进阶习题**
>- [6-7 统计某类完全平方数][6-7]
>- [6-10 阶乘计算升级版][6-10]
>- [6-13 折半查找][6-13]



---

## 7. 结构体

### 7.1 结构体定义

### 7.2 结构体元素访问

### 要求与题目练习

**基础要求**
>- 会根据题目要求构建合适的结构体
>- 熟练结构体的访问等操作

**基础习题**
>- [7-34 通讯录的录入与显示][7-34]

---

## 8. 简单指针

### 8.1 指针简介

### 8.2 一维指针的定义，初始化与使用

### 8.3 一维指针与数组，指针作为函数参数

### 8.4 实现简单链表

### 要求与题目练习

**基本要求**
>- 了解指针的基本作用
>- 理解数组作为函数参数的方式

**进阶挑战**
>- 实现简单链表

**进阶习题**
>- [6-6 求单链表结点的阶乘和][6-6]




[7-1]: https://pintia.cn/problem-sets/14/problems/781
[7-2]: https://pintia.cn/problem-sets/14/problems/782
[7-3]: https://pintia.cn/problem-sets/14/problems/783
[7-4]: https://pintia.cn/problem-sets/14/problems/784
[7-5]: https://pintia.cn/problem-sets/14/problems/785
[7-6]: https://pintia.cn/problem-sets/14/problems/786
[7-7]: https://pintia.cn/problem-sets/14/problems/787
[7-8]: https://pintia.cn/problem-sets/14/problems/788
[7-9]: https://pintia.cn/problem-sets/14/problems/789
[7-10]: https://pintia.cn/problem-sets/14/problems/790
[7-11]: https://pintia.cn/problem-sets/14/problems/791
[7-12]: https://pintia.cn/problem-sets/14/problems/792
[7-13]: https://pintia.cn/problem-sets/14/problems/793
[7-14]: https://pintia.cn/problem-sets/14/problems/794
[7-15]: https://pintia.cn/problem-sets/14/problems/795
[7-16]: https://pintia.cn/problem-sets/14/problems/796
[7-17]: https://pintia.cn/problem-sets/14/problems/797
[7-18]: https://pintia.cn/problem-sets/14/problems/798
[7-19]: https://pintia.cn/problem-sets/14/problems/799
[7-20]: https://pintia.cn/problem-sets/14/problems/800
[7-21]: https://pintia.cn/problem-sets/14/problems/801
[7-22]: https://pintia.cn/problem-sets/14/problems/802
[7-23]: https://pintia.cn/problem-sets/14/problems/803
[7-24]: https://pintia.cn/problem-sets/14/problems/804
[7-25]: https://pintia.cn/problem-sets/14/problems/805
[7-26]: https://pintia.cn/problem-sets/14/problems/806
[7-27]: https://pintia.cn/problem-sets/14/problems/807
[7-28]: https://pintia.cn/problem-sets/14/problems/808
[7-29]: https://pintia.cn/problem-sets/14/problems/809
[7-30]: https://pintia.cn/problem-sets/14/problems/810
[7-31]: https://pintia.cn/problem-sets/14/problems/811
[7-32]: https://pintia.cn/problem-sets/14/problems/812
[7-33]: https://pintia.cn/problem-sets/14/problems/813
[7-34]: https://pintia.cn/problem-sets/14/problems/814
[7-35]: https://pintia.cn/problem-sets/14/problems/815
[7-36]: https://pintia.cn/problem-sets/14/problems/816
[7-37]: https://pintia.cn/problem-sets/14/problems/2990
[7-38]: https://pintia.cn/problem-sets/14/problems/3006




[6-1]: https://pintia.cn/problem-sets/14/problems/733
[6-2]: https://pintia.cn/problem-sets/14/problems/734
[6-3]: https://pintia.cn/problem-sets/14/problems/735
[6-4]: https://pintia.cn/problem-sets/14/problems/736
[6-5]: https://pintia.cn/problem-sets/14/problems/737
[6-6]: https://pintia.cn/problem-sets/14/problems/738
[6-7]: https://pintia.cn/problem-sets/14/problems/739
[6-8]: https://pintia.cn/problem-sets/14/problems/740
[6-9]: https://pintia.cn/problem-sets/14/problems/741
[6-10]: https://pintia.cn/problem-sets/14/problems/742
[6-11]: https://pintia.cn/problem-sets/14/problems/743
[6-12]: https://pintia.cn/problem-sets/14/problems/744
[6-13]: https://pintia.cn/problem-sets/14/problems/44932

