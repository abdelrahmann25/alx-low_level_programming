#include <stdio.h>

/**
 * main - print even fibonacci numbers till 4,000,000
 *
 * Return: always 0
 */
int main(void)
{
	long int i = 1, j = 2, tmp = 0, sum = 2;

	while (tmp <= 4000000)
	{
		tmp = i + j;
		if (tmp % 2 == 0)
			sum += tmp;
		i = j;
		j = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
