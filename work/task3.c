/*
line - ���������� ����� ������ � ������� ������������, ��������� �������� 1
count - ����� ���������� �����
*/
char * layout(char buf[], int line, int count)
{
	int cn = 0;	//������ �������� � �������

	for (; cn < (count - line); cn++)
	{
		buf[cn] = ' ';
	}
	for (int i = 1; i <= (line * 2 - 1); cn++, i++)
	{
		buf[cn] = '*';
	}
	return buf;
}