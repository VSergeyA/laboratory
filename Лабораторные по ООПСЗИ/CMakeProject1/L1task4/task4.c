#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double x;
double result;
void f(void);

int main(void)
{
	x = 12.56;
	f();
	printf("f(%lf) = %lf \r\n", x, result);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	f();
	printf("f(%lf) = %lf \r\n", x, result);
	system("pause");
	return 0;
}
void f(void)
{	
	result = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 *x)));
}