/*26.���� ��� ���������� ������, ��������� ������ �� ���� (�����
������ � ����� 10 ��������). ������, ��� � ���� ������� ���������
������� ����� �����, ������������ ������ ������ � ����� ����
�����.*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int main(void) 
{
	char line1[100], line2[100];
	printf("enter the first number:");
	scanf_s("%99�", line1);
	printf("enter the second number:");
	scanf_s("%99�", line2);
	long int a = 0, b = 0, c = 0;
	a = atoi(line1);
	b = atoi(line2);
	c = a + b;
	printf("%lu", c);
	return 0;
}