// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>



int main(void)
{

	double a, b, h, d, x, y, n, s, m, i;
	printf("Enter a:");
	scanf_s("%lf", &a);
	printf("Enter b:");
	scanf_s("%lf", &b);
	printf("Enter h:");
	scanf_s("%lf", &h);
	printf("Enter d:");
	scanf_s("%lf", &d);

	for (x = a; x <= b; x = x + h)
	{
		s = 0;
		n = 0;
		do
		{
			m = 1;
			n = n + 1;
			y = 0;
			for (i = 1; i <= n; i++) {
				m = m*i;
			}
			y = (pow(x, n * 2) - 1) / m;
			s = s + y;
			n++;

		} while (fabs(y) > d);
		printf("\n x=%lf y=%lf s=%lf ", x, y, s);


	}
	printf("\n");
	system("pause");
}