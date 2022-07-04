#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	for(char lastChar = 'a'; lastChar < 'z'; lastChar++)
	{
		putchar(lastChar);
	}
	putchar("\n");
	return (0);
}
