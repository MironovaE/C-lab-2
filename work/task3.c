#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#define SIZE 100

char * layout(char buf[], int line, int count)
{
	int i;
	int weightGap,weihgtStar;
	weightGap = count-line;
	weihgtStar = line + line - 1;
	 i = 0;
	for (i;i<weightGap;i++)
	{
		buf[i] = ' ';
	}
	for (; i <(weightGap + weihgtStar);i++)
	{
		
		buf[i] = '*';
	}
	buf[i + 1] = '\0';
	return buf;
}



/*������ �3

����������� ������ ��������� ���:

*
***
*****
���������� ����� ������� ������������� � ����������.

������

��������� ������ �������� �� ���� �������:

char * layout(char buf[],int line,int count) - ������������ ����� ������ ������������ (line - ���������� ����� ������ � ������� ������������, ��������� �������� 1,
count - ����� ���������� �����).
��� ���� ����� ������ ��������� ��������� (�������), � ����� ��������� "���������".
main*/