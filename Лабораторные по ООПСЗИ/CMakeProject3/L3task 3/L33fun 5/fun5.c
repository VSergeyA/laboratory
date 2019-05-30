#include <math.h>
#include "../L3include 3/f3.h"

int findFirstNegativeElement(double eps)
{
	double a = 0.0;
	int j;
	int i = 0;
	do
	{
		a = pow(-1, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
		if (fabsf(a) <= eps)
		{
			j = i;
			return j;
		}
		i--;
	}while (i < 1);
	
}