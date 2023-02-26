#include <stdio.h>

/**
 * main - print Fizz Buzz test
 *
 * Return: 0 Succeded
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			continue;
		}
		printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
