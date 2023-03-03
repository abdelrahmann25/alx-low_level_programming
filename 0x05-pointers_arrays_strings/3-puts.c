#include "main.h"

/**
 * _puts - print string followedby new line to stdout
 * @str: the string to pe printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
