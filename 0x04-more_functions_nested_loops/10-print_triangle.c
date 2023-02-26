#include "main.h"

/**
 * print_triangle - print # triangle with hieght size
 * @size: hieght of triangle
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			space = size - i;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

