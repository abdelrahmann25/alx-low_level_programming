#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0 (succeded)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, tmp, count = 0;

	while (count < 98)
	{
		printf("%lu, ", a);
		tmp = b;
		b += a;
		a = tmp;
		count++;
	}
	printf("\n");
	return (0);
}
