#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - test the sign of a number
 *
 * Return: 0 (Succeed)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
