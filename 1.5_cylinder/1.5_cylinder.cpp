// 1.5_cylinder.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	const double pi = acos(-1.0);
	double r, h, s1, s2, s;
	scanf_s("%lf%lf", &r, &h);
	s1 = pi * r*r;
	s2 = 2 * pi*r*h;
	s = s1 * 2.0 + s2;
	printf("Area=%.3f\n", s);
    return 0;
}

