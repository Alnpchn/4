#include<stdio.h>
#include<locale.h>
void main(void)
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	puts("Задание 1");
	printf("%c %d %f %lf\n", c, i, f, d);
	scanf("%c%d%f%lf", &c, &i, &f, &d);
	system("pause");
	system("cls");



	puts("Задание 1а");
	double A;
	int B;
	double E;
	scanf("%lf", &A);
	B = (int)A;
	E = A - B;
	printf("%d %lf\n", B, E);
	system("pause");
	system("cls");



	puts("Задание 2");
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d %f %lf\n", x, y, z);
	printf("%f %lf\n", (float)a / b, (double)a / b);
	system("pause");
	system("cls");


	puts("Задание 3");
	int n;
	scanf("%d", &n);
	printf("Ваше число %d\n", n);
	printf("Последняя цифра %d, первая цифра %d, сумма цифр %d\n", n % 10, n/100, (n%10) + (n / 10 % 10) + (n / 100));
	printf("Число наоборот %d%d%d", n % 10, n / 10 % 10, n / 100);
}