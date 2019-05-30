#include <math.h>
#include "../L3include 2/f2.h"

int findFirstElement(double eps)
{
	double a = 0.0;
	int i = 0;
	int j = 0;
	while (i > -1)
	{
		a = pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		if (fabsf(a) <= eps)
		{
			j = i;
			break;
		}
		i++;
	}

	return j;
}