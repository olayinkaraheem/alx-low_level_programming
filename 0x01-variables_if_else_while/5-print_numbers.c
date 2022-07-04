#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lastChar = '0';

	while (lastChar <= '9')
	{
		putchar(lastChar);
		lastChar++;
	}
	putchar('\n');
	return (0);
}
