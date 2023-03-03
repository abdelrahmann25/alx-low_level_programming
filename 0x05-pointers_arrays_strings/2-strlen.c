#include "main.h"

/**
 * _strlen - find the length of string passed by ref
 * @s: the address of string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
