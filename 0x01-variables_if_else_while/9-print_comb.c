#include <stdio.h>

/**
 * main - Printing 0, 1, ... ,9
 *
 * Return: Always  0 (succeed)
 */
int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
