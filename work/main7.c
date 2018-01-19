/*������ ��������� ������������� ��� ������� ������������� �������� � 
������ (� ��� ����� ��������, ���� � ��), �� ����������� ���������: '\n' � '\0'*/

#include <stdio.h>
#define SIZE 512
#define SIZE_BUF 256

/*����� ������� � ������� ���������� ��� ���������� �������. ���� ���������� ������ 
� ������� buf ����������� ������� ��������� 0, ���� ���� 1*/

int Poisk(char * line, int ind, char * buf)
{
	for (int i = 0; i < SIZE_BUF && (buf[i] != '\n' && buf[i] != '\0'); i++)
	{
		if (line[ind] == buf[i])
		{
			return 1;
		}
	}
	return 0;
}


//������� ������������� ����������� �������, ��������� ���������� ����������
int Count(char * line, int ind)
{
	int count = 0;
	for (int i = 0; i < SIZE && (line[i] != '\n' && line[i] != '\0'); i++)
	{
		if (line[ind] == line[i])
		{
			count++;
		}
	}
	return count;
}


int main()
{
	char line[SIZE] = { 0, };	//������ �������� �������������
	char buf[SIZE_BUF] = { 0, };	//������ ��� ����������� � ���������� ��������
	int indBuf = 0;	//��������� ������ ������� buf ��������� �� �������

	printf("Enter a text string: ");
	fgets(line, SIZE, stdin);
	printf("%s\t%s\n", "Char", "Count");


	for (int ind = 0; ind < SIZE && (line[ind] != '\n' && line[ind] != '\0'); ind++)
	{
		/*���� ������� ������ ����������� � ������� buf (������ ��� ����������� � 
		���������� ��������) �� �� ���� ����������� � ���������� ����� ������� ����� 
		������������� �������*/
		if (Poisk(line, ind, buf) == 0) 
		{
			buf[indBuf] = line[ind];
			//����� ������� ����� ������������� ������� � ����� �����������
			printf("'%c':\t%d\n", line[ind], Count(line, ind)); 
			indBuf++;
		}
	}		
	return 0;
}