#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x);
double f(double x)
{
	double z;
	z = ((sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x)));
	return z;
}