#include "main.h"

/**
 * more_numbers - print from 0 to 14 x10 times
 */
void more_numbers(void)
{
	int i, j, tmp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tmp = j;
			if (j > 9)
			{
				_putchar('1');
				tmp = j % 10;
			}
			_putchar('0' + tmp);
		}
	_putchar('\n');
	}
}
