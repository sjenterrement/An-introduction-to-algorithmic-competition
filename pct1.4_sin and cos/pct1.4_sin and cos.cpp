// pct1.4_sin and cos.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>

int main()
{
	int n;
	const double pi = acos(-1.0);
	double s, c;
	scanf_s("%d", &n);
	if (n < 360) {
		s = sin(n*pi/180);
		c = cos(n*pi/180);
		printf("%.3f %.3f\n", s, c);
	}
    return 0;
}

