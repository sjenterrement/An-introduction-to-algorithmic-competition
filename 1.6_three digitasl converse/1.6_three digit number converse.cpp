// 1.6_three digitasl converse.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);
    return 0;
}

