#include <stdio.h>

/**
 * main - calculate the and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 Succeded
 */
int main(void)
{
	unsigned long int factor = 2, num = 612852475143;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lu\n", factor);
	return (0);
}
