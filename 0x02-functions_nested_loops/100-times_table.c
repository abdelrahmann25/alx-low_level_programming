#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n times table
 * @n: the n times
 */
void print_times_table(int n)
{
	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			result = i * j;
			printf(",");
			printf("%4d", result);
		}
		_putchar('\n');
	}
}

