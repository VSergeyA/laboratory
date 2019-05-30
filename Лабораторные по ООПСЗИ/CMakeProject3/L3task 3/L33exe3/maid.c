#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <f3.h>

int main(void)
{
	setlocale(LC_ALL, "Rus");
	int s,n,k;
	double eps;
	printf("1.Задание 1\r\n");
	printf("2.Задание 2\r\n");
	printf("3.Задание 3\r\n");
	printf("4.Задание 4\r\n");
	printf("5.Задание 5\r\n");
	printf("6.Выход\r\n");
	do {
		scanf_s("%d", &s);
		switch (s)
		{
		case 1:
			system("cls");
			printf("Введите значение n\r\n");
			scanf_s("%d", &n);		
			printf("сумма a = %lf\r\n", summ(n));
			system("pause");
			break;
		case 2:
			system("cls");
			printf("Введите точность eps\r\n");
			scanf_s("%lf", &eps);
			printf("сумма a = %lf, с погрешностью %lf\r\n", summ2(eps),eps);
			system("pause");
			break;
		case 3:
			system("cls");
			printf("Введите количество n членов последовательность\r\n");
			scanf_s("%d", &n);
			printf("Введите какие каждые к-ые члены последовательность должны быть исключены\r\n");
			scanf_s("%d", &k);
			print(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("Введите точность eps\r\n");
			scanf_s("%lf", &eps);
			printf("%d номер первого члена последовательности, для которого выполняется условие\r\n", findFirstElement(eps));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("Введите точность eps\r\n");
			scanf_s("%lf", &eps);
			printf("%d номер первого отрицательного члена последовательности, для которого выполняется условие\r\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		}
		
		system("cls");
		printf("1.Задание 1\r\n");
		printf("2.Задание 2\r\n");
		printf("3.Задание 3\r\n");
		printf("4.Задание 4\r\n");
		printf("5.Задание 5\r\n");
		printf("6.Выход\r\n");

	} while (s != 6);
	return 0;
}
