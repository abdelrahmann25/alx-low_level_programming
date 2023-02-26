#include "main.h"

/**
 * print_diagonal - print \ n times
 * @n: the n times printed
 */
void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			space = i;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
