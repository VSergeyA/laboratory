#include <stdio.h>
#include <stdlib.h>
#include <math.h>


extern double x;
extern double result;
void f(void);

int main(void)
{
	x = 18.84;
	f();
	printf("f(%lf) = %lf \r\n", x, result);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	f();
	printf("f(%lf) = %lf \r\n", x, result);
	system("pause");
	return 0;
}
