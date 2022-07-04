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

	for(lastChar = 'a'; lastChar <= 'z'; lastChar++)
	{
		putchar(lastChar);
	}
	putchar('\n');
	return (0);
}
