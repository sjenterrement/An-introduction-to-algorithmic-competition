// 1.13_rank three integers2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b&&b < c)printf("%d %d %d\n", a, b, c);
	else if (a <= c&&c <= b)printf("%d %d %d\n", a, c, b);
	else if (b <= a&&a <= c)printf("%d %d %d\n", b, a, c);
	else if (b <= c&&c <= a)printf("%d %d %d\n", b, c, a);
	else if (c <= a&&a <= b)printf("%d %d %d\n", c, a, b);
	else if (c <= b&&c <= a)printf("%d %d %d\n", c, b, a);
	return 0;
}

