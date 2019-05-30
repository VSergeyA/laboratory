#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x);
int main(void)
{
	double y;
	double x = 15.7;
	y = f(x);
	printf("f(%lf) = %lf \r\n", x, y);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	y = f(x);
	printf("f(%lf) = %lf \r\n", x, y);
	system("pause");
	return 0;
}