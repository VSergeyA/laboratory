#include <math.h>
#include "../L3include 1/f1.h"

int findFirstElement(double eps)
{
	double a = 0.0;
	int j = 0;
	for (int i = 0; ; i++)
	{
		a = pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		if (fabsf(a) <= eps)
		{
			j = i;
			break;
		}
	}

	return j;
}