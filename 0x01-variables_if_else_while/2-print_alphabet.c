#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always  0 (succeed)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
