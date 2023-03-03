#include "main.h"
/**
 * _strcpy - copy a string to dest string
 * @dest: the destnation of copying
 * @src: the source to copy from
 *
 * Return: the base address of destnation string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
