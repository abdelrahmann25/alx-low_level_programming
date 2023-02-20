#include <stdio.h>

/**
 * main - Printing a to z then A to Z using 3 putchar
 *
 * Return: 0 (Succeed)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
