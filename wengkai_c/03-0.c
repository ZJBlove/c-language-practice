/*03-0. 超速判断(10)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
杨起帆（浙江大学城市学院）
模拟交通警察的雷达测速仪。输入汽车速度，如果速度超出60 mph，则显示“Speeding”，否则显示“OK”。

输入格式：

输入在一行中给出1个不超过500的非负整数，即雷达测到的车速。

输出格式：

在一行中输出测速仪显示结果，格式为：“Speed: V - S”，其中V是车速，S或者是Speeding、或者是OK。
————————————————
版权声明：本文为CSDN博主「coderstory」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fjinhao/article/details/46853171*/
#include <stdio.h>
 
int main()
{
  int i;
  scanf("%d", &i);
  if(i <= 60)
    printf("Speed: %d - OK", i);
  else
    printf("Speed: %d - Speeding", i);
  return 0;
}