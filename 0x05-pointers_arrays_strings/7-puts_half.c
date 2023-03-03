#include "main.h"
/**
 * puts_half - print second half of a string passed by ref
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
