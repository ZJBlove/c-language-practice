/*03-2. 用天平找小球(10)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求找出这个不一样的球。

输入格式：

输入在一行中给出3个正整数，顺序对应球A、B、C的重量。

输出格式：

在一行中输出唯一的那个不一样的球。


————————————————
版权声明：本文为CSDN博主「coderstory」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fjinhao/article/details/46853171*/
# include <stdio.h>
 
int main()
{
     int A, B, C;
     scanf("%d%d%d",&A, &B, &C);
     if(A != B && B ==C)
           printf("A");
     else if(B != A && A == C)
           printf("B");
     else if(C != A && A == B)
           printf("C");
    return 0;
}








