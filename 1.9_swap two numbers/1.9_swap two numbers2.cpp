// 1.9_swap two numbers.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
    return 0;
}

