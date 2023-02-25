#include "main.h"

/**
 * _isalpha - checks whether character is alphabet
 * @c: the character to be checked
 *
 * Return: 1 if the charcter is alphabet. otherwise 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
