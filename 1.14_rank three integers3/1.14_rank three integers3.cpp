// 1.14_rank three integers3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, c, t;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b) { t = a; a = b; b = t; }//执行完毕之后a<=b
	if (a > c) { t = a; a = c; c = t; }//执行完毕之后a<=c,且a<=b依然成立
	if (b > c) { t = b; b = c; c = t; }
	printf("%d %d %d\n", a, b, c);
    return 0;
}

