﻿#include <math.h>
#include "../L3include 3/f3.h"

double summ2(double eps)
{
	double a=0.0;
	int i = 0;
	do
	{
		a += pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		if (fabsf(a) <= eps)
			return a;
		i++;
	}while (i > -1);
	return a;
}