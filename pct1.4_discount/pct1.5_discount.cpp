// pct1.4_discount.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int p, P, n;
	double m;
	p = 95;
	scanf_s("%d", &n);
	P = p * n;
	if (P >= 300)
		m = 0.85*P;
	printf("%.2f", m);
    return 0;
}

