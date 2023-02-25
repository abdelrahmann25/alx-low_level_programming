#include "main.h"

/**
 * print_last_digit - prints the last digit of entered number
 * @n: the digit entered
 *
 * Return: ld the las digit.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
