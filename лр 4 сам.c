#include<stdio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "RUS");
	int L1, L2, V1, V2;
	float result;
	puts("������� ����� ������� ������");
	scanf("%d", &L1);
	puts("������� ����� ������� ������");
	scanf("%d", &L2);
	puts("������� �������� ������� ������");
	scanf("%d", &V1);
	puts("������� �������� ������� ������");
	scanf("%d", &V2);
	result = (L1 + L2)/(V1 + V2);
	printf("����������������� ����������� ������ ������ ������� %.1f", result, V1, V2, L1, L2);
}