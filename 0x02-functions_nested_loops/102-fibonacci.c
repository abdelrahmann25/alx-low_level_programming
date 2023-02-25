#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int counter;
	long int i = 1, j = 2, tmp = 0;

	printf("%ld, %ld, ", i, j);
	for (counter = 3; counter < 50; counter++)
	{
		tmp = i + j;
		printf("%ld, ", tmp);
		i = j;
		j = tmp;
	}
	return (0);
}
