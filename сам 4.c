#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	float result, L1, L2, V1, V2;
	puts("������� ����� ������� ������");
	scanf("%f", &L1);
	puts("������� ����� ������� ������");
	scanf("%f", &L2);
	puts("������� �������� ������� ������");
	scanf("%f", &V1);
	puts("������� �������� ������� ������");
	scanf("%f", &V2);
	result = (L1 + L2) / (V1 + V2);
	printf("����������������� ����������� ������ ������ ������� %.3f", result, V1, V2, L1, L2);
}