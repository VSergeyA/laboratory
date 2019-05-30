#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double x = 3.14;
	double f;
	f = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	printf("f(%lf) = %lf \r\n", x, f);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	f = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	printf("f(%lf) = %lf \r\n", x, f);
	system("pause");
	return 0;
}

