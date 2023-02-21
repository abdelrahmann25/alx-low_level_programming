#include <stdio.h>

/**
 * main - Printing hexadecimal numbers
 *
 * Return: 0 (Succeed)
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	c = 65;
	while (c <= 70)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
