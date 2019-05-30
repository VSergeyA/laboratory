#include <math.h>
#include "../L3include 2/f2.h"

double summ(int n)
{
	double a = 0.0;
	int i = 0;
	while(i < n)
	{
		a += pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		i++;
	}
	return a;
}