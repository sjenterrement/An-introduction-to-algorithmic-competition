// 1.8_swap two numbers.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, t;
	scanf_s("%d%d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d", a, b);
    return 0;
}

