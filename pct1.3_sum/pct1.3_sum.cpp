// pct1.3_sum.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n, s = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	printf("%d\n", s);
    return 0;
}

