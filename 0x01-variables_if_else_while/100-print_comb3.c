#include <stdio.h>

/**
 * main - Printing 00 to 99 without repeated combination
 *
 * Return: 0 (succeed)
*/
int main(void)
{
	int f, s;

	for (f = 48; f <= 57; f++)
	{
		for (s = 48; s <= 57; s++)
		{
			if (s < f)
				continue;
			if (s == f)
				continue;
			putchar(f);
			putchar(s);
			if (s == 57 && f == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
