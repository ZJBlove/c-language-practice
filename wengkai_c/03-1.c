/*03-1. 三天打鱼两天晒网(15)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
中国有句俗语叫“三天打鱼两天晒网”。假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？

输入格式：

输入在一行中给出1个不超过1000的正整数N。

输出格式：

在一行中输出此人在第N天中是“Fishing”（即“打鱼”）还是“Drying”（即“晒网”），并且输出“in day N”。
————————————————
版权声明：本文为CSDN博主「coderstory」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/fjinhao/article/details/46853171*/
#include <stdio.h>
 
int main()
{
	int i;
	scanf("%d", &i);	
	if(i%5 <= 3 && i%5 != 0)
	     printf("Fishing in day %d", i);
	else 
	     printf("Drying in day %d", i);
	return 0;
} 