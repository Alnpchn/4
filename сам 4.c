#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float result, L1, L2, V1, V2;
	puts("Введите длину первого поезда");
	scanf("%f", &L1);
	puts("Введите длину второго поезда");
	scanf("%f", &L2);
	puts("Введите скорость первого поезда");
	scanf("%f", &V1);
	puts("Введите скорость второго поезда");
	scanf("%f", &V2);
	result = (L1 + L2) / (V1 + V2);
	printf("Продолжительность прохождения одного против другого %.3f", result, V1, V2, L1, L2);
}