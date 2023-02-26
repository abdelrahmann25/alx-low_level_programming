#include "main.h"

/**
 * _isdigit - checks whether enterded is digit
 * @c: the character to be checked
 *
 * Return: 1 if digit 0 otherwise.
 */
int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
		r = 1;
	else
		r = 0;
	return (r);
}
