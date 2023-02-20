#include <stdio.h>
#include <unistd.h>

/**
 * main - print without printf or puts
 *
 * Return: 1 this time gives error
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\r", stdout);
	return (1);
}
