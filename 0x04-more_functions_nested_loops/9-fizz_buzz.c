#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s", "FizzBuzz");
		} else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		} else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		} else
		{
			printf("%d", i);
		}

		if (i < n)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
