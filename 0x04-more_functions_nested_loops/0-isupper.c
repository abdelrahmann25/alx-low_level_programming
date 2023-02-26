#include "main.h"

/**
 * _isupper - checks whether character upper case
 * @c: the character to be checked
 *
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;
	return (r);
}

