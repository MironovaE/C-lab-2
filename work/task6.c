#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define GAP ' '
#define SIZE 300
char * clear(char *line)
{
	int i, j;
	int short len = 0; // count len
	char check1, check2,check3;
	while (line[len] != '\0')// count string
	{
		len++;
	}
	--len;
	for (i=0;line[i- 1] != '\0';i=i+1)
	{
		check1 = line[i];//search gap
		check2 = line[++i];//search gap
		//conditions: if first gap, if  gap together , if 1 gap and end string 
			 if ((check1==GAP && i==1)||(check1 == GAP && check2 == GAP) ||( line[i+1] == '\0' && check1 == GAP))
			 {
				 j = i;
				 while (line [j]!= '\0')
					 {
						 line[j - 1] = line[j];// chenge symbol on following
						 j++;
						 line;
					 }
					 line[j-1] = '\0';//cheng last symbol on '\0'
						len--;
						i=i-1;
			}
			 i--;
	}
	return line;
}

/*������ �6

   �������� ���������, ��������� ������ �� ������ ��������. ������� ���-
   ������ ������� � ������ ������, � ����� ������ � ������� ����� �������,
   ���� �� ���������� ������ 1.
���������

� ������ ��������� ��������� ��������� �������������� �������, �� ���� ���������� ���������� � �������� ������. ����� ���������� ��������� �������� �� �����.

������

��������� ������ �������� �� ���� �������:

char * clear(char * line) - ������� ������ line.
main() - ����������� �������.*/