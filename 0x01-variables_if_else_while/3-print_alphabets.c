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
	char lastUpperChar;

	for (lastChar = 'a'; lastChar <= 'z'; lastChar++)
	{
		putchar(lastChar);
	}

	for (lastUpperChar = 'A'; lastUpperChar <= 'Z'; lastUpperChar++)
	{
		putchar(lastUpperChar);
	}
	putchar('\n');
	return (0);
}
