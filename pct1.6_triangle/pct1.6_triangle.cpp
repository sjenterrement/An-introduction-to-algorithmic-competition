// pct1.6_triangle.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && c + b > a)
		if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("yes\n");
		else
			printf("no\n");
	else
		printf("not a triangle\n");
    return 0;
}

