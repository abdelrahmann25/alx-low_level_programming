#include "main.h"

/**
 * _abs - takes integer and compute its absulote value
 * @j: the integer to be checked
 *
 * Return: absloute value of j.
 */
int _abs(int j)
{
	if (j >= 0)
		return (j);
	else if (j > 0)
		return (-j);
	return (0);
}
