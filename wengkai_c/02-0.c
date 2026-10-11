/*02-0. 整数四则运算(10)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
乔林（清华大学）
本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。

输入格式：

输入在一行中给出2个正整数A和B。

输出格式：

在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。


————————————————
版权声明：本文为CSDN博主「coderstory」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fjinhao/article/details/46853171*/
#include<stdio.h>

int main(void){
int a,b;
scanf("%d %d",&a,&b);
printf("%d + %d = %d\n",a,b ,a+b);
printf("%d - %d = %d\n",a,b ,a-b);
printf("%d * %d = %d\n",a,b ,a*b);
printf("%d / %d = %d\n",a,b ,a/b);

return 0;




}
