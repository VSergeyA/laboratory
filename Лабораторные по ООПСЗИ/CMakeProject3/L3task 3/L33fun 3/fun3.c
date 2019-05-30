#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../L3include 3/f3.h"

void print(int n, int k)
{
	double a = 0.0;
	int i = 0;
	do
	{
		if (i != 0)
			if ((i + 1) % k == 0)
			{
				i++;
				continue;
			}
		a = pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		printf("  %fl", a);
		i++;
	}while (i < n);
	printf("\r\n");
	return;
}
