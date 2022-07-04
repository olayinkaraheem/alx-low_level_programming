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

	for (lastChar = 'z'; lastChar >= 'a'; lastChar--)
	{
		putchar(lastChar);
	}
	putchar('\n');
	return (0);
}
