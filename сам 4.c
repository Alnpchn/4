#include<stdio.h>
#include<locale.h>
float name(float L1, float L2, float V1, float V2)
{
	float result = (L1 + L2) / (V1 + V2);
	return result;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	float L1, L2, V1, V2, t;
	puts("Введите длину первого поезда");
	scanf("%d", &L1);
	puts("Введите длину второго поезда");
	scanf("%d", &L2);
	puts("Введите скорость первого поезда");
	scanf("%d", &V1);
	puts("Введите скорость второго поезда");
	scanf("%d", &V2);
	t = name(L1, L2, V1, V2);
	printf("Продолжительность прохождения одного против другого %lf", t);
	return 0;
}
