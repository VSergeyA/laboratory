#include <math.h>
#include "../L3include 3/f3.h"

double summ(int n)
{
	double a = 0.0;
	int i = 0;
	do
	{
		a += pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		i++;
	} while (i < n);
	return a;
}