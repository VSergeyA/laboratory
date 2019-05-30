#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../L3include 1/f1.h"

void print(int n, int k)
{
	double a = 0.0;
	for (int i = 0; i < n; i++)
	{
		a = pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		if ((i + 1) % k == 0)
			continue;
		printf("  %fl", a);
	}
	printf("\r\n");
	return;
}
