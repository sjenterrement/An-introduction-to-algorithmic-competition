// 1.7_three digit number converse2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n, m;
	scanf_s("%d", &n);
	m = (n % 10) * 100 + (n / 10 % 10) * 10 + n / 100;
	printf("%03d\n", m);
    return 0;
}

