#include "main.h"

/**
 * _islower - checks if character inputed is lower
 * @c: the character to be checked
 *
 * Return: 1 if lower and 0 if not lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
