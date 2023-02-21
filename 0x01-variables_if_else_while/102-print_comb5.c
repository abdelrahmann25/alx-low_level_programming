#include <stdio.h>

/**
 * main - Printing 00 00 to 99 99 without repeated combination
 *
 * Return: 0 (succeed)
*/
int main(void)
{
	int f, s, t, fo;

	for (f = 48; f <= 57; f++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (t = 48; t <= 57; t++)
			{
				for (fo = 48; fo <= 57; fo++)
				{
					if (s == f && fo == t)
						continue;
					putchar(f);
					putchar(s);
					putchar(' ');
					putchar(t);
					putchar(fo);
					if (f == 57 && s == 56 && t == 57 && fo == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
