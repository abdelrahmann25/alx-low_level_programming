#include "main.h"
/**
 * swap_int - swaps to passsd by reference values
 * @a: first reference
 * @b: second refernce
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
