// prc1.2_temperature.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	double c, f;
	scanf_s("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("%.3f\n", c);
    return 0;
}

