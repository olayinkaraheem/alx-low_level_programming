#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lastChar;

	lastChar = 'a';
	putchar(lastChar);
	while (lastChar < 'z')
	{
		lastChar += 1;
		putchar(lastChar);
	}
	return (0);
}
