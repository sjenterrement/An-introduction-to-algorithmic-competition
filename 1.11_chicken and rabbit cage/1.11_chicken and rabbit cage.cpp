// 1.11_chicken and rabbit cage.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, n, m;
	scanf_s("%d%d", &n, &m);
	a = (4 * n - m) / 2;
	b = n - a;
	if (m % 2 == 1 || a < 0 || b < 0)
		printf("No answer\n");
	else
		printf("%d %d\n", a, b);
    return 0;
}

