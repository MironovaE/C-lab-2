#include "task6.h"

char * shift(char * line, int ind)	//����� ������� ��������
{
	for (;(ind < SIZE && line[ind] != '\n' && line[ind] != '\0'); ind++)
	{
		line[ind] = line[ind + 1];
	}
	return line;
}

char * clear(char * line)	// ������� ������ line.
{
	int i = 0;
	while (1)
	{
		if ((i == 0) && (line[i] == ' '))
		{
			shift(line, i);
			continue;
		}

		else if (line[i] == ' ' && line[i + 1] == ' ')
		{
			shift(line, i);
			continue;
		}

		else if (line[i] == ' ' && (line[i + 1] == '\n' || line[i + 1] == '\0'))
		{
			shift(line, i);
			break;
		}

		if (i == SIZE - 1 || line[i] == '\n' || line[i] == '\0')
			break;

		i++;
	}
	return line;
}
