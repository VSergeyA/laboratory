#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
	double z;
	z = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	return z;
}
int main(void)
{	
	double y;
	double x = 6.28;
	y = f(x);
	printf("f(%lf) = %lf \r\n", x, y);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	y = f(x);
	printf("f(%lf) = %lf \r\n", x, y);
	system("pause");
	return 0;
}