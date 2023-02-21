#include <stdio.h>

/**
 * main - Printing 000 to 999 without repeated combination
 *
 * Return: 0 (succeed)
*/
int main(void)
{
	int f, s, t;

	for (f = 48; f <= 57; f++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (t = 48; t <= 57; t++)
			{
				if (s < f || t < s)
					continue;
				if (s == f || s == t)
					continue;
				putchar(f);
				putchar(s);
				putchar(t);
				if (f == 55 && s == 56 && t == 57)
					break;
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
