#include <stdio.h>

/**
 * main - print even fibonacci numbers till 4,000,000
 *
 * Return: always 0
 */
int main(void)
{
	long int i = 1, j = 2, tmp = 0;

	printf("%ld, %ld", i, j);
	while (tmp < 4000000)
	{
		tmp = i + j;
		if (tmp % 2 == 0)
			printf(", %ld", tmp);
		i = j;
		j = tmp;
	}
	printf("\n");
	return (0);
}
