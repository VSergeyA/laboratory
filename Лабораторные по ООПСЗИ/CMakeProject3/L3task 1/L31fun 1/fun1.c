#include <math.h>
#include "../L3include 1/f1.h"

double summ(int n)
{
	double a = 0.0;
	for (int i = 0; i < n; i++)
	{
		a += pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
	}
	return a;
}