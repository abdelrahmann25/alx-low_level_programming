#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always  0 (succeed)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
