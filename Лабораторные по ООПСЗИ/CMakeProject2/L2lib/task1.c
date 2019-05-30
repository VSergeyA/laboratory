#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../L2header/f.h"

double Area(double x, double y)
{
	if (fabsf(y) <= 1 && fabsf(x) <= 1)
		if (fabsf(x) <= fabsf(y))
			return i = 1;
		else
			return i = 0;
	else
		return i = 0;
}

double f(double x)
{
	
	if (x <= 3)
		return z = pow(x, 2) - 3 * x + 9;
	if (x > 3)
		return z = 1 / (pow(x, 3) + 3);
	return 0;
}