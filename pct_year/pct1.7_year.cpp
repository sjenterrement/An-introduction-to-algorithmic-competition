// pct_year.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		printf("yes\n");
	else
		printf("no\n");
    return 0;
}

