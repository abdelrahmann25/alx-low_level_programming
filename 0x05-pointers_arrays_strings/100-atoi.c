#include "main.h"
/**
 * _atoi - convert string passed by ref into integer
 * @s: the string converted
 */
int _atoi(char *s)
{
	int sign = 1, num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * sign);
}
