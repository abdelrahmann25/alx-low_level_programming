#include "main.h"

/**
 * print number - print entered number
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int tmp;

	tmp = n;
	if (n < 0)
	{
		_putchar(45);
		tmp = -n;
	}
	if (tmp / 10 != 0)
	{
		print_number(tmp / 10);
	}
	_putchar('0' + (tmp % 10));
}
