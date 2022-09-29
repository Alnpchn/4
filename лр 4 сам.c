#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int L1, L2, V1, V2;
	float result;
	puts("Введите длину первого поезда");
	scanf("%d", &L1);
	puts("Введите длину второго поезда");
	scanf("%d", &L2);
	puts("Введите скорость первого поезда");
	scanf("%d", &V1);
	puts("Введите скорость второго поезда");
	scanf("%d", &V2);
	result = (L1 + L2)/(V1 + V2);
	printf("Продолжительность прохождения одного против другого %.1f", result, V1, V2, L1, L2);
}