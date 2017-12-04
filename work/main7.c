#include <stdio.h>

#define SIZE 1000
#define N 512

int main()
	{
		char buf[SIZE] = {' '};
		int count[N] = {0};
		int i = 0;

		printf("Enter some chars:\n");
		scanf("%s", buf);

		while (buf[i] != '\0')
		{
			count[buf[i] - '0']++;
			i++;
		}
	
		for (i = 0; i < N; i++)
		{
				if (count[i]>0)
					printf("%c-%d\n", i + '0', count[i]);
		}

		return 0;
	}