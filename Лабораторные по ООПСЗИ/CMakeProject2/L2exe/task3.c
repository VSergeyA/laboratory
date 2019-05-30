#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <f.h>

int main(void)
{
	
	int s;
	printf("1. Task 1\r\n");
	printf("2. Task 2\r\n");
	printf("3. Close\r\n");
	printf("your choice:");

	
	do {
		scanf_s("%d", &s);
	switch (s)
	{
	case 1:
		printf("Task 1:\r\n");
		printf("enter the value of x\r\n");
		scanf_s("%lf", &x);
		printf("enter the value of y\r\n");
		scanf_s("%lf", &y);
		Area(x, y);
		if (i == 1)
		{
			printf("i = %d so the point falls in the specified region\r\n", i);
		}
		else
		{
			printf("i = %d so the point does not fall into the specified area", i);
		}		
		s = 0;
		break;
	case 2:
		printf("enter the value of x\r\n");
		scanf_s("%lf", &x);
		f(x);
		printf("f(%lf) = %lf", x, z);
		s = 0;
		break;
	}
	if (s != 3)
		system("pause"); 
	printf("1. Task 1\r\n");
	printf("2. Task 2\r\n");
	printf("3. Close\r\n");
	printf("your choice:");

	} while (s != 3);
	return 0;
}