char * layout(char buf[], int line, int count)//������������ ����� ������ ������������
				//line - ���������� ����� ������ � ������� ������������, ��������� �������� 1 
				//count - ����� ���������� �����
{
	int cn;	//������� � �������

	for (cn = 0; cn < (count - line); cn++)
	{
		buf[cn] = ' ';
	}
	for (int i = 1; i <= (line * 2 - 1); cn++, i++)
	{
		buf[cn] = '*';
	}
	return buf;
}