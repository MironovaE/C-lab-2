#include <stdio.h>
char *process(char *line)
{ 
	int begin = 0, end = 0;
	char buffer = 0; // ���������� ��� ������ ��������� ��������

	for (; line[begin] != '\0'; begin++, end++); // ���������� ������ ������
	--end; // ��������� � ������� \0
	
	begin = 0;

	while (begin < end) // ��-�� begin++ � end-- ��������� �������� ����� (begin > end)

	{
		for (; ((line[begin] >= 'a') && (line[begin] <= 'z')); begin++);
		if (begin > end) // ��� ��������� ������ � buffer ����� (begin > end)
			break;
		buffer = line[begin];
		
		for (; ((line[end] >= '0') && (line[end] <= '9')); end--);
		if (end < begin) // ��� ��������� ������ � buffer ����� (begin > end)
			break;
		line[begin] = line[end];
		line[end] = buffer;
		continue;
	}

	return line;
}
